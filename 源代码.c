#include<stdio.h>
#include<time.h>
#define MAX 150
#define MIN 1
int suiji(void);
int main(void)
{	
	printf("欢迎使用简陋得不能再简陋的幸运观众抽取器！\n");
	printf("本软件冷却时间1S钟！\n");
	printf("按下回车键进行抽取！\n")
	getchar();
	printf("本次抽取的幸运观众是%d号同学!!!\n",suiji());
	
	return 0;
}
int suiji(void)
{	
	int b=0;
	b=((unsigned int)time(0))*166234%61342*123466%5231;
	while(b>MAX)
		b%=MAX;
	while(a<MIN)
		b=MIN;

	return b;
}
