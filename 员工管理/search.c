#include "xqr.h"
void search(){
	//���ǲ�ѯԱ������ҳ��
	FILE *fp=fopen("D:\gz.dat","rb+"); 
	if(fp==NULL){
		printf("����"); 
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
		printf("��������Ҫ���ҵ�Ա����ţ�");
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
				printf("Ա�����:%s\n��λ����:%d\nн������:%d\n��������:%d\nˮ���:%d\n�����ۿ�:%d\n\n",man[i].uid,man[i].salary,man[i].csalary,man[i].revenue,man[i]._water_electricity,man[i]._deductions);
				}	
		}
		if(i>=n)	printf("û�и�Ա��");
		int k;
		printf("�Ƿ����������1/0");
		scanf("%d",&k);
		if(k==0)
			break;
	}
	fclose(fp);
}
