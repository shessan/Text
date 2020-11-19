#include "xqr.h"
void search(){
	//这是查询员工工资页面
	FILE *fp=fopen("D:\gz.dat","rb+"); 
	if(fp==NULL){
		printf("错误"); 
		exit(0);
	}
	int i,j,n=0;
	char c,impt[5];
	for(i=0;feof(fp)==0;++i){
		fread(&man[i],sizeof(man[i]),1,fp);
		++n;
	}
	
	while(1){
		system("CLS");
		getchar();
		printf("请输入想要查找的员工编号：");
		for(i=0;(c=getchar())!=EOF;++i){
			if(c>='0'&&c<='9')
				impt[i]=c;
			else 
				break;
		}
		for(i=0;i<=n;++i){
			j=0;
			while(j<5){
				if(man[i].uid[j]==impt[j])
					++j;
				else break;
			}
				if(j==5){
				printf("员工编号:%s\n岗位工资:%d\n薪级工资:%d\n其他补贴:%d\n水电费:%d\n其他扣款:%d\n\n",man[i].uid,man[i].salary,man[i].csalary,man[i].revenue,man[i]._water_electricity,man[i]._deductions);
				}	
		}
		if(i>=n)	printf("没有该员工");
		int k;
		printf("是否还想继续查找1/0");
		scanf("%d",&k);
		if(k==0)
			break;
	}
	fclose(fp);
}
