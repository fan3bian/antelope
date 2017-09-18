#include "stdio.h"
int main(int argc, char const *argv[])
{
	//sizeof:C语言运算符(opertor),给出某个类型或者变量在内存中所占的字节数。
	char a = 6;
// 	int b = 6; 
// 	unsigned int ub = 6;
//	bool c = true;
// 	long d = 6;
// 	double e = 6;
	//类似于宏定义，a++在编译阶段进行文本替换。一目操作数，静态运算符，结果在编译时期决定。
	//sizeof()中的表达式在程序运行时，并不执行。 
	printf("sizeof(a)=%d\n",sizeof(a));
	printf("sizeof(a++)=%d\n",sizeof(a++));
	printf("a=%d\n",a);
	printf("sizeof(a+1)=%d\n",sizeof(a+1));
	printf("a=%d\n",a);
	printf("sizeof(a+0.1)=%d\n",sizeof(a+0.1));
	printf("a=%d\n",a);
	printf("sizeof(char)=%d\n",sizeof(char));
	printf("sizeof(int)=%d\n",sizeof(int));
	printf("sizeof(unsigned int)=%d\n",sizeof(unsigned int));
	printf("sizeof(long)=%d\n",sizeof(long));
	printf("sizeof(long long)=%d\n",sizeof(long long));
	printf("sizeof(double)=%d\n",sizeof(double));
	printf("sizeof(long double)=%d\n",sizeof(long double));
	return 0;
}
