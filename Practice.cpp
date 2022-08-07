#include<stdio.h>
int main()
{
	int n, sum, t;
	scanf_s("%d", &n);
	sum = 0;
	t = 1;
	while (t <= n)
	{
		sum += t;
		t = t + 2;
	}
	printf("sum=%d\n", sum);
	scanf_s("%d", &n);
	return 0;
}