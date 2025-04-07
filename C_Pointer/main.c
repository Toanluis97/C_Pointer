#include<stdio.h>
void increment(int* v);
void main()
{
	int a;
	scanf_s("%d", &a);
	increment(&a);
	printf("%d",a);
	return 0;
}