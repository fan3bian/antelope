#include "stdio.h"
int main(int argc, char const *argv[])
{
	int a = 100;
    char str[20] = "c.biancheng.net";
    printf("%#X, %#X\n", &a, str);//%#X print as HEX format ,get the address of the variable or array

    int *p_a = &a;//declare *p_a pointer variable,the value of *p_a must be a address, so put &before the assignment variable
    printf("%d %d\n", a ,*p_a);//they hava same output. 
   	int b = 50;//the type of p_a is int* instead of int 
    p_a = &b;//pointer assign value without * draw attention
    *p_a = 50;//assign 50 to variable a;
	return 0;	
}
