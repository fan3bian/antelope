#include "stdio.h"
int main(int argc, char const *argv[])
{
	//sizeof:C���������(opertor),����ĳ�����ͻ��߱������ڴ�����ռ���ֽ�����
	char a = 6;
// 	int b = 6; 
// 	unsigned int ub = 6;
//	bool c = true;
// 	long d = 6;
// 	double e = 6;
	//�����ں궨�壬a++�ڱ���׶ν����ı��滻��һĿ����������̬�����������ڱ���ʱ�ھ�����
	//sizeof()�еı��ʽ�ڳ�������ʱ������ִ�С� 
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
