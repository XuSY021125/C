#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int n;
	printf("ÇëÊäÈënµÄÖµ£º");
	scanf("%d", &n);
	if (n >= 0)
	{
		int s = 1;
		if (n > 0)
		{
			int i = 1;
			while (i <= n)
			{
				s = s * i;
				i = i + 1;
			}
			printf("%d", s);
		}
		else
		{
			printf("%d", s);
		}
	}
	else
	{
		printf("error!");
	}
	return 0;
}