#include<stdio.h>
void main()
{
    int arr[3] = { 10, 100, 1000 }, i = 0;
    int* ptr = arr;
    for (i = 0; i < 3; i++)
    {
        printf("数组%d的地址为：%p\n", i, ptr);
        printf("数组%d的内容为：%d\n", i, *ptr);
        ptr++;//在int类型中，基本单位为4byte，因此ptr++实际上是+4，指向下一个数组
    }
}