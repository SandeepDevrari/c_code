/*this is an example of GETS() AND PUTS()*/
#include <stdio.h>
main(int argc,char *argv[])
{
	char s[10],*p;
	p=s;
	puts("enter");
	p=gets(p);
	puts("u entered");
	puts(s);
}
