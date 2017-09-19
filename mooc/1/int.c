#include "stdio.h"
int main(int argc, char const *argv[])
{
	char a = 255;//a被当做补码看待 -128 ~ 127
	unsigned char ua = 255;// 0~255 纯二进制运算，移位。导致了整数返范围扩大。
	int b = 255;
	a = 127;
	a++;
	ua++;
	char c = 012;
	char d = 0x12;
	printf("a=%d\n",a);//-128
	printf("ua=%d\n",ua);//0
	printf("b=%d\n",b);
	printf("c=%d\n",c);//
	printf("d=%d\n",d);
	printf("c=%o\n",c);//
	printf("d=%x\n",d);
	return 0;
}
