#include "xqr.h"
void sort(){
//	getchar();
	system("CLS");
	FILE *fp=fopen("D:\gz.dat","rb+"); 
	if(fp==NULL){
		printf("����"); 
		exit(0);
	}
	
	int i,n=0,j;
	long int sum[50],t;
	char te[5]; 
	for(i=0;feof(fp)==0;++i){
		fread(&man[i],sizeof(man[i]),1,fp);
		++n;
	}
	fclose(fp);
//	printf("asdfksdgmjoadflask"); 
	for(i=0;i<n-1;++i){
		sum[i]=man[i].csalary+man[i].revenue+man[i].salary-man[i]._deductions-man[i]._water_electricity;
	}

	for(i=0;i<n-1;++i){
		for(j=0;j<=i;++j){
			if(sum[i]<sum[j]){
				t=sum[i];
				sum[i]=sum[j];
				sum[j]=t;
				
				strcpy(te,man[j].uid);
				strcpy(man[j].uid,man[i].uid);
				strcpy(man[i].uid,te);
				
				t=man[i].csalary;
				man[i].csalary=man[j].csalary;
				man[j].csalary=t;
				
				t=man[i].revenue;
				man[i].revenue=man[j].revenue;
				man[j].revenue=t;
				
				t=man[i].salary;
				man[i].salary=man[j].salary;
				man[j].salary=t;
				
				t=man[i]._deductions;
				man[i]._deductions=man[j]._deductions;
				man[j]._deductions=t;
				
				t=man[i]._water_electricity;
				man[i]._water_electricity=man[j]._water_electricity;
				man[j]._water_electricity=t;
			}
		}
	}
	for(i=0;i<n-1;++i){
		printf("Ա�����:%s\n��λ����:%d\nн������:%d\n��������:%d\nˮ���:%d\n�����ۿ�:%d\n������:%d\n\n",man[i].uid,man[i].salary,man[i].csalary,man[i].revenue,man[i]._water_electricity,man[i]._deductions,sum[i]);
	}
	getchar();
	getchar();
	
}
