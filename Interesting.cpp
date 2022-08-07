#include<stdio.h>
int main()
{
	int n, sum, t;
	    scanf_s("%d", &n);
	sum=0;
	    t=1;
	do
	{
		sum+=t;
		t+=2;
	} while(t<n);
	printf("sum=%d\n",sum);
	return 0;
}