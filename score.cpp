#include<stdio.h>
int main()
{
	int score;
	char grade;
	scanf_s("%d", &score);
	grade = score >= 90 ? 'A' : (score >= 60 ? 'B' : 'C');
	printf("%c", grade);
	return 0;
}