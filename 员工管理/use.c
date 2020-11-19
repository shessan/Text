#include<stdio.h>
#define MAX 30
int use(){
	char user[MAX]="xie";
	char pass[MAX]="123";
	char suser[MAX];
	char spass[MAX]; 
	int i,a,j=0,l=0;
	char c;
	system("CLS");
	printf("这是用户名密码页面,请输入用户名密码\n");
	printf("用户名："); 
	for(i=0;(c=getchar())!='\n'&&c!=EOF&&c!='\0';++i)
		suser[i]=c;
	suser[i]='\0';
	
	printf("密  码：");
	for(a=0;(c=getchar())!='\n'&&c!=EOF&&c!='\0';++a)
		spass[a]=c;
	spass[a]='\0';
	
	while(user[j]!='\0'){
		if(user[j]==suser[j])
			++j;
		else return 0; 
	}
	while(pass[l]!='\0'){
		if(user[l]==suser[l])
			++l;
		else return 0;
	}
	if(i==j&&a==l)
		return 1;
	else return 0;
}
