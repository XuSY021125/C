#include<stdio.h>

int main()
{
	char cChar;
	short int iShort;
	int iInt;
	float fFloat = 70000;

	cChar = (char)fFloat;
	iShort = (short)fFloat;
	iInt = (int)fFloat;

	printf("the char is:%c\n", cChar);
	printf("the short is;%d\n", iShort);
	printf("the int is;%d\n", iInt);
	printf("the float is;%f\n", fFloat);

	return 0;
}