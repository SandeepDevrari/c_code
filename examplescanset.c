/*this is an example of SCANF()*/
#include <stdio.h>
main(int argc,char *argv[])
{
	char i[9];
	char s[25],d[32];
	puts("enter any characters");
	scanf("%[0-9]%[a-z]%[`!@#$%^&*()_+~]",i,s,d);
	printf("u entered\n%s\n%s\n%s\n",i,s,d);
}	
