#include<stdio.h>
#define Hour_years (365*24)
int main()
{
	float hours;
	printf("请输入一个小时数:");
	scanf("%f", &hours);
	printf("%3fyear(s)", hours / Hour_years);
	return 0;
}
