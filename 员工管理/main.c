#include "xqr.h"
//�Զ��庯�� 
void menu();		//�˵� 
int use();			//�û������� 
void imput_data();	//¼��Ա����Ϣ 
void calculate();	//ͳ��Ա����Ϣ 
void sort();		//Ա���������� 
void search();		//��ѯԱ������
void add();			//����Ա������
void dele();		//ɾ�� 

int main(int argc, char *argv[]) {
	int a;
	int i=1;
	for(i=1;i<=3;++i){
		if(use()==0){
		system("CLS");
		printf("�û�����������󣬻�ʣ%d�λ���,����ҳ����ת����������",3-i);
		sleep(2);
		}
		else {
		system("CLS");
		printf("�û���,������ȷ��ӭʹ�ñ�����");
		sleep(1);
		break;	
		}
		if(i==3){
			system("CLS");
			printf("�Բ�������Ѵ����ޣ���������3���ر�");
			sleep(1);
			exit(0); 
		}
	}
	while(1){
		menu();
		scanf("%d",&a);
		switch(a){
			case 1:	imput_data();	//����¼��Ա����Ϣҳ�� 
					break;
			case 2:	calculate();	//����ͳ��Ա����Ϣҳ��
					break;
			case 3:	sort();			//����Ա����������ҳ��
					break;
			case 4:	search();		//���ǲ�ѯԱ������ҳ��
					break;
			case 5:	add();			//��������Ա������ҳ��
					break;
			case 6:	dele();		//����ɾ��Ա������ҳ��
					break;
			case 0: exit(0);
		}
	}
	return 0;
}
