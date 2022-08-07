#pragma warning(disable:4996)
#include<stdio.h>
#define H 2
int main()
{
	int L, W;
	printf("请输入长度：\n");
	scanf("%d", &L);
	printf("请输入宽度：\n");
	scanf("%d", &W);
	int V=L*W*H;
	printf("长方体的体积为：");
	printf("%d", V);
	return 0;
}