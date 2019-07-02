/*this is a program for listing arguments*/
#include <stdio.h>
main(int argc,char *argv[])	
/*argc=number of charaters & argv=array to storethem*/
{
	int a;
	for(a=1;a<=argc;a++)
	{
	 printf("argument no-%d and  argument is-%s\n",a,argv[a]);
	}
}




