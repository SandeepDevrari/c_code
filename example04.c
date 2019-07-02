
/*program for printing ASCII in decimal and character form*/
#include <stdio.h>
void dis(int);
main(int argc,char *argv[])
{
	int i=0;
 	puts("A to Z");
	for(i=65;i<=90;i++)
	 	dis(i);
	printf("\n");
	puts("0 to 9");
	for(i=48;i<=57;i++)
		dis(i);
	printf("\n");
	puts("a to z");
	for(i=97;i<=122;i++)
	 	dis(i);
	printf("\n");
	puts("sysmbols");
	for(i=33;i<=127;i++)
	 {
	 	if((i>=48&&i<=57)||(i>64&&i<91)||(i>96&&i<123))
	  	 {
			continue;
	  	 }
	 	dis(i);
	 }
	printf("\n");
}
void dis(int s)
{
	printf("%d->%c\t",s,s);
}
