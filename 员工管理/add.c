#include "xqr.h"
void add(){
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
	n=n-2;
		printf("员工编号:%s\n岗位工资:%d\n薪级工资:%d\n其他补贴:%d\n水电费:%d\n其他扣款:%d\n",man[n].uid,man[n].salary,man[n].csalary,man[n].revenue,man[n]._water_electricity,man[n]._deductions);
		fclose(fp);
		getchar();
} 
