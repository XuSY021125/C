#include<stdio.h>

int sum(int n)
{
	int a = 0, b = 0;
	for (a = 0;a <= n;a++)
	{
		b = a + b;
	}
	return b;
}
int main()
{
	int n;
	printf("please input the number;\n");
	scanf_s("%d", &n);
	printf("the result is;%d\n", sum(n));
	return 0;
}