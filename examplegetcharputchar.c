/*this is an example of GETCHAR() & PUTCHAR()*/
#include <stdio.h>
main(int argc,char *argv[])
{
	int i;
	puts("enter ");
	i=getchar();	//GETCHAR()
	puts("u entered");
	putchar(i);
	puts(" ");
}
