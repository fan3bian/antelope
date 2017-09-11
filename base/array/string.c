#include "string.h"
#include <stdio.h>
int main(int argc, char const *argv[])
{
	char str1[] = "confident";
	char str2[] = "confidence";
	printf("%d\n", strlen(str1));//get the lenght of the str
	printf("%s\n", strcat(str1,str2));//connet str1 and str2
	printf("%d\n", strcmp(str1,str2));//compare the ASCII from the char >0 , 0, <0
	printf("%s\n", strcpy(str1,str2));//copy the str to  str
	
	char str3[20],str4[20],str5[20];
	scanf("%s", str3);
    gets(str4);
    puts(str4);
    scanf("%s", str5);
    //attention:There isn't & 
    //这是因为C语言规定，数组名就代表了该数组的地址。
	return 0;
}
