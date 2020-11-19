#include "xqr.h"
void imput_data(){
	//这是录入员工信息页面
	system("CLS");
	FILE *fp=fopen("D:\gz.dat","ab+"); 
	if(fp==NULL){
		printf("错误"); 
		exit(0);
	}
	while(1){
		char c;
		int i;
		getchar();
		printf("请输入该员工职工代号(0-9)(仅限5位):");
		for(i=0;(c=getchar())!=EOF;++i){
			if(c>='0'&&c<='9'){
				man[0].uid[i]=c;
				if(i==4)
				break;
			}	
			else break;
			if(i==4)
			break;	
		}
		if(i<4)
		man[0].uid[i]='\0';
		printf("请输入该员工岗位工资:");
		scanf("%d",&man[0].salary);
		printf("请输入该员工薪级工资:");
		scanf("%d",&man[0].csalary);
		printf("请输入该员工其他补贴:");
		scanf("%d",&man[0].revenue);
		printf("请输入该员工水电费:");
		scanf("%d",&man[0]._water_electricity);
		printf("请输入该员工其他扣款:");
		scanf("%d",&man[0]._deductions);
		fwrite(&man[0],sizeof(man[0]),1,fp);
		int a;
		printf("是否还要继续输入1/0");
		scanf("%d",&a);
		if(a==0)
			break;
	}
	fclose(fp);
}
