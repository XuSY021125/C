#include<stdio.h>
int main()
{
	int i,sum=0, day, month, year;
	printf("�������꣬�£���\n");
	scanf_s("%d", &year);
	scanf_s("%d", &month);
	scanf_s("%d", &day);
	switch(month)
	{
	case 1:
		sum = 0;
		break;
	case 2:
		sum = 31;
		break;
	case 3:
		sum = 59;
		break;
	case 4:
		sum = 90;
		break;
	case 5:
		sum = 120;
		break;
	case 6:
		sum = 151;
		break;
	case 7:
		sum = 181;
		break;
	case 8:
		sum = 212;
		break;
	case 9:
		sum = 243;
		break;
	case 10:
		sum = 273;
		break;
	case 11:
		sum = 304;
		break;
	case 12:
		sum = 334;
		break;
	defaut:
		printf("error");
		break;
	}
	sum = sum + day;
	if (year % 4 == 0)
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	if (i == 1 && month > 2)
	{
		sum++;
		printf("��һ���ǵ�%d��", sum);
	}
	else
	{
		printf("���ǵ�%d��", sum);
	}
	return 0;
}