#include<stdio.h>
int main()
{
	int i, j, k, t;
	scanf_s("%d%d%d", &i, &j, &k);
	if (i > j)
	{
		t = i;
		i = j;
		j = t;
	}
	if (i > k)
	{
		t = i;
		i = k;
		k = t;
	}
	if (j > k)
	{
		t = j;
		j = k;
		k = t;
	}
	printf("��С������%d,%d,%d", i, j, k);
	return 0;
}