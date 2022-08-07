#include <stdio.h>
int main()
{
	int i = 1, sum = 0;
	do
	{
		sum += i;
		i++;
	} while (i <= 100);		/*这里括号后面一定要加分号*/
	{
		printf("sum=%d,i=%d\n", sum, i);
	}
	return 0;
}