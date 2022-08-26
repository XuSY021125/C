#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str[4] = "123";
	int a;
	a = atoi(str);
	printf("string=%s,a=%d", str,a);
	return 0;
}