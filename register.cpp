#include<stdio.h>
int main()
{
	char cString[6],cString1[4],cString2[4],cString3[19];
	puts("请输入账号：");
	gets_s(cString);
	
	puts("请输入密码：");
	gets_s(cString1);
	
	puts("请输入名字：");
	gets_s(cString2);
	
	puts("请输入身份证号：");
	gets_s(cString3);

	puts("你输入的账号是：");
	puts(cString);
	puts("你输入的密码是：");
	puts(cString1);
	puts("你输入的名字是：");
	puts(cString2);
	puts("你输入的身份证号是：");
	puts(cString3);
	return 0;
}