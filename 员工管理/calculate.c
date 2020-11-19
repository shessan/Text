#include "xqr.h"
void calculate(){
	//这是统计员工信息页面
	getchar();
	system("CLS");
	FILE *fp=fopen("D:\gz.dat","rb+"); 
	if(fp==NULL){
		printf("错误"); 
		exit(0);
	}
	int i,n=0; 
	for(i=0;feof(fp)==0;++i){
		fread(&man[i],sizeof(man[i]),1,fp);
		++n;
	}
	for(i=0;i<n-1;++i){
			printf("员工编号:%s\n岗位工资:%d\n薪级工资:%d\n其他补贴:%d\n水电费:%d\n其他扣款:%d\n\n",man[i].uid,man[i].salary,man[i].csalary,man[i].revenue,man[i]._water_electricity,man[i]._deductions);
	}
	fclose(fp);
	getchar();
	
}
