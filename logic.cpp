#include<stdio.h>

int main()
{
	int iNumber1, iNumber2;
	iNumber1 = 10;
	iNumber2 = 0;

	printf("the 1 is Ture,0 is False\n");
	printf("5 < iNumber1 && iNumber2 is %d\n", 5 < iNumber1 && iNumber2);			//真与假=假   &&两真为真//
	printf("5 < iNumber1 || iNumber2 is %d\n", 5 < iNumber1 || iNumber2);			//真或假=真   ||有真即真//
	iNumber2 = !!iNumber1;
	printf("iNumber2 is%d\n", iNumber2);
	return 0;
}