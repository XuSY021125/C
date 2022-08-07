#include <stdio.h>
int main()
{
	int i, sum;
	i = 1; sum = 0;			/*给i和sum分别赋初值，否则它们的值是不可预测的，结果不正确 */
	while (i <= 100)		/*当i大于100时退出循环*/
	{
		sum += i;
		i++;				 /*i+1后再循环，这个语句有使循环趋于结束*/
	}
	printf("sum=%d\n", sum);
	return 0;
}