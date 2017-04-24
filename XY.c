#include<stdio.h>
#include<time.h>
#define X 15
#define Y 10
int xsuiji(void);
int ysuiji(void);
int main(void)
{	
	printf("                           欢迎使用简陋得不能再简陋的幸运观众抽取器！                      \n");
	printf("                                     本软件冷却时间1S钟！                                  \n");
	printf("                                     按下回车键进行抽取！                                  \n");
	

	getchar();
	printf("                               本次抽取的幸运观众是%d排%d列的同学!!!                               \n",ysuiji(),xsuiji());
	
	return 0;
}

int xsuiji(void)
{	
	int a=0;
	a=((unsigned int)time(0))*166234%61342*123466%5231;
	while(a>(X+1))
		a=a%X+1;
	while(a<=0)
		a=1;

	return a;
}

int ysuiji(void)
{
	int a=0;
	a=((unsigned int)time(0))*982831%38724*192466%7081;
	while(a>(Y+1))
		a=a%Y+1;
	while(a<=0)
		a=1;
	
	return a;
}




