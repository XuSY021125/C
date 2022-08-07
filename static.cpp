#include<stdio.h>
void click()
{
	static int sum = 0;
	sum = ++sum ;
	printf("µã»÷Á¿Îª%d\n", sum);
}
void main()
{
	click();
	click();
	click();
	click();
	click();
}