#include "stdio.h"
void swap(int *a, int *b);
int main(int argc, char const *argv[])
{
	int a = 3, b = 4;
	swap(&a,&b);
	printf("%x\n", &a);
	printf("%d %d\n",a, b) ;
	return 0;
}
void swap(int *a, int *b)
{
	int tmp ;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
