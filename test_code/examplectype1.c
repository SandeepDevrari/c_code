/*this is another example of <CTYPE.H>*/
#include <stdio.h>
#include <ctype.h>
main(int argc,char *argv[])
{
	char s[200],c;
	int i=0;
	puts("enter string");
	do
	 {
		c=getchar();
		if(islower(c))
			c=toupper(c);
		else
			c=tolower(c);
		s[i]=c;
		i++;
	 }while(c!='\n');
	puts("u entered");
	puts(s);
}
