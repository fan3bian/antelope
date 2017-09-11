#include <stdio.h>
int main(int argc, char const *argv[])
{
	//数据是以二进制的形式保存在内存中的，字节（Byte）是最小的可操作单位。
	//int a;会在内存中分配四个字节的空间，我们将第一个字节的地址称为变量 a 的地址，也就是&a的值。
	//对于前面讲到的整数、浮点数、字符，都要使用 & 获取它们的地址，scanf 会根据地址把读取到的数据写入内存。
	int a,b,c,d;	
	scanf("%d",&a);
	scanf("%d",&b);
	printf("a+b=%d\n", a+b);  //计算a+b的值
    scanf("%d %d", &c, &d);  //%d %d中间有空格" ",所以输入的时候也要加空格。
    printf("c*d=%d\n", c*d);

	return 0;
}
