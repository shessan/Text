#include "xqr.h"
void add(){
	getchar();
	system("CLS");
	FILE *fp=fopen("D:\gz.dat","rb+"); 
	if(fp==NULL){
		printf("����"); 
		exit(0);
	}
	int i,n=0; 
	for(i=0;feof(fp)==0;++i){
		fread(&man[i],sizeof(man[i]),1,fp);
		++n;
	}
	n=n-2;
		printf("Ա�����:%s\n��λ����:%d\nн������:%d\n��������:%d\nˮ���:%d\n�����ۿ�:%d\n",man[n].uid,man[n].salary,man[n].csalary,man[n].revenue,man[n]._water_electricity,man[n]._deductions);
		fclose(fp);
		getchar();
} 
