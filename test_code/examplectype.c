/*this is an example of <CTYPE.H> header file*/
#include <stdio.h>
#include <ctype.h>
main(int argc,char argv[])
{
	int i;
	//char s[20];
	puts("enter any character");
	i=getchar();
	if(islower(i))
		i=toupper(i);
	else
		i=tolower(i);
	putchar(i);
	puts(" ");
}	
