#include "xqr.h"
//自定义函数 
void menu();		//菜单 
int use();			//用户名密码 
void imput_data();	//录入员工信息 
void calculate();	//统计员工信息 
void sort();		//员工工资排序 
void search();		//查询员工工资
void add();			//新增员工工资
void dele();		//删除 

int main(int argc, char *argv[]) {
	int a;
	int i=1;
	for(i=1;i<=3;++i){
		if(use()==0){
		system("CLS");
		printf("用户名或密码错误，还剩%d次机会,请在页面跳转后重新输入",3-i);
		sleep(2);
		}
		else {
		system("CLS");
		printf("用户名,密码正确欢迎使用本程序");
		sleep(1);
		break;	
		}
		if(i==3){
			system("CLS");
			printf("对不起错误已达上限，本程序将在3秒后关闭");
			sleep(1);
			exit(0); 
		}
	}
	while(1){
		menu();
		scanf("%d",&a);
		switch(a){
			case 1:	imput_data();	//这是录入员工信息页面 
					break;
			case 2:	calculate();	//这是统计员工信息页面
					break;
			case 3:	sort();			//这是员工工资排序页面
					break;
			case 4:	search();		//这是查询员工工资页面
					break;
			case 5:	add();			//这是新增员工工资页面
					break;
			case 6:	dele();		//这是删除员工工资页面
					break;
			case 0: exit(0);
		}
	}
	return 0;
}
