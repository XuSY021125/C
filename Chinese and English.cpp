#include<stdio.h>

int main()
{
	int iChinese, iEnglish;
	printf("Enter Chinese score:");
	scanf_s("%d", &iChinese);
	printf("Enter English score:");
	scanf_s("%d", &iEnglish);

	if (iChinese > iEnglish)
	{
		printf("Cihinese is better than English\n");
	}
	if (iChinese < iEnglish)
	{
		printf("English is better than Chinese\n");
	}
	if (iChinese == iEnglish)
	{
		printf("Chinese equal English\n");
	}
	return 0;
}