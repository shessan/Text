#include "xqr.h"
void calculate(){
	//����ͳ��Ա����Ϣҳ��
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
	for(i=0;i<n-1;++i){
			printf("Ա�����:%s\n��λ����:%d\nн������:%d\n��������:%d\nˮ���:%d\n�����ۿ�:%d\n\n",man[i].uid,man[i].salary,man[i].csalary,man[i].revenue,man[i]._water_electricity,man[i]._deductions);
	}
	fclose(fp);
	getchar();
	
}
