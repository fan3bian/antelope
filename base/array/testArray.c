#include "stdio.h"
int main(int argc, char const *argv[])
{
	int a[4];//
	a[0] = 10;
	a[1] = 10;
	a[2] = 10;
	a[3] = 10; //

	int b[3] = {1,2,3};//assignment initialization
	int c[10] = {1,2,3};//assign some elements of the array, rest of whick will be initilized with 0 by deafault

	//There is no type#String in c program
	char str1[30] = {"c.biancheng.net"};
	char str2[30] = "c.biancheng.net";  

	char str3[] = {"c.biancheng.net"};
	char str4[] = "c.biancheng.net";  
	char str5[30] = "You are a good\0 boy!";//'\0'是ASCII码表中的第0个字符，用NUL表示，称为空字符。该字符既不能显示，也不是控制字符，输出该字符不会有任何效果，它在C语言中仅作为字符串的结束标志。
	printf("%s\n", str5);
}