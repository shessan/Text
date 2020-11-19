#include "xqr.h"
void dele(){
	//这是删除员工页面 
//	printf("这是删除员工工资页面");
	system("CLS");
	FILE *fp=fopen("D:\gz.dat","rb+"); 
	if(fp==NULL){
		printf("错误"); 
		exit(0);
	}
	int n=0,i,j,sum=0; 
	int js=0;
	for(i=0;feof(fp)==0;++i){
		fread(&man[i],sizeof(man[i]),1,fp);
		++n;
	}
	fclose(fp);
	while(1){
		char c,impt[5]={'0'};
		system("CLS");
		getchar();
		printf("请输入想要删除的员工编号：");
		for(i=0;(c=getchar())!=EOF;++i){
			if(c>='0'&&c<='9'){
				impt[i]=c;
				if(i==4)
				break;
			}else 
				break;
			if(i==4)
				break;	
		}
		if(i<4)
		man[0].uid[i]='\0';
//		printf("\n%d\n",strcmp(&man[i].uid[0],impt));
//		printf("%s\n",impt);
		for(i=0;i<n-1;++i){
			if(strcmp(impt,man[i].uid)==0){
//				printf("是的犯得上大师傅撒旦");
					fp=fopen("D:\gz.dat","wb+");
					while(i<n-1){
						strcpy(man[i].uid,man[i+1].uid);
						man[i].csalary=man[i+1].csalary;
						man[i].revenue=man[i+1].revenue;
						man[i].salary=man[i+1].salary;
						man[i]._deductions=man[i+1]._deductions;
						man[i]._water_electricity=man[i+1]._water_electricity;
//						printf("%s\n",man[i].uid);
						++i;
					}
					sum++;
					break;
			}	
		}
//		printf("\n%d\n",sum);
		if(sum>js){
			for(i=0;i<n-(sum+1);++i){
				fwrite(&man[i],sizeof(man[i]),1,fp);
			}
			printf("删除成功\n");
		}else printf("没有该员工\n");
		fclose(fp);	
		js=sum;	
		int k;
		printf("是否还想继续删除1/0");
		scanf("%d",&k);
		if(k==0)
			break;
	}
	getchar();
}
