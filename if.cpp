#include<stdio.h>

int main()
{
	int iSignal;
	printf("the Red Light is0,the Green Light is 1\n");
	scanf_s("%d", &iSignal);
	if (iSignal == 1)
	{
		printf("the Light is green,cars can run\n");
	}
	return 0;
}