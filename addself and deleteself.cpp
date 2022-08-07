#include<stdio.h>

int main()
{
	int iNumber1 = 3;
	int iNumber2 = 3;

	int iResultPreA, iResultLastA;
	int iResultPreD, iResultLastD;

	iResultPreA = ++iNumber1;			//前缀先自增再赋值//
	iResultLastA = iNumber2++;

	printf("The Addself...\n");
	printf("the iNumber1 is:%d\n", iNumber1);
	printf("the iResultPreA is:%d\n", iResultPreA);
	printf("the iNumber2 is:%d\n", iNumber2);
	printf("the iResultLastA is:%d\n", iResultLastA);

	iNumber1 = 3;			//恢复变量的值为3//
	iNumber2 = 3;

	iResultPreD = --iNumber1;			//前缀先自减再赋值//
	iResultLastD = iNumber2--;

	printf("The Deleteself...\n");
	printf("the iNumber1 is:%d\n", iNumber1);
	printf("the iResultPreD is:%d\n", iResultPreD);
	printf("the iNumber2 is:%d\n", iNumber2);
	printf("the iResultLastD is:%d\n", iResultLastD);

	return 0;
}