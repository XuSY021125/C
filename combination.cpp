#include<stdio.h>
int main()
{
	int i, j, k;
	for (i = 1; i < 5; i++)
	{
		for (k = 1; k < 5; k++)
		{
			for (j = 1; j < 5; j++)
			{
				if (i != k && i != j && k != j)
				{
					printf("  %d%d%d", i, k, j);
				}
			}
		}
		printf("\n");
	}
	
	return 0;
}