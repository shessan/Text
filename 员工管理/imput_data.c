#include "xqr.h"
void imput_data(){
	//����¼��Ա����Ϣҳ��
	system("CLS");
	FILE *fp=fopen("D:\gz.dat","ab+"); 
	if(fp==NULL){
		printf("����"); 
		exit(0);
	}
	while(1){
		char c;
		int i;
		getchar();
		printf("�������Ա��ְ������(0-9)(����5λ):");
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
		printf("�������Ա����λ����:");
		scanf("%d",&man[0].salary);
		printf("�������Ա��н������:");
		scanf("%d",&man[0].csalary);
		printf("�������Ա����������:");
		scanf("%d",&man[0].revenue);
		printf("�������Ա��ˮ���:");
		scanf("%d",&man[0]._water_electricity);
		printf("�������Ա�������ۿ�:");
		scanf("%d",&man[0]._deductions);
		fwrite(&man[0],sizeof(man[0]),1,fp);
		int a;
		printf("�Ƿ�Ҫ��������1/0");
		scanf("%d",&a);
		if(a==0)
			break;
	}
	fclose(fp);
}
