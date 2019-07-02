/*this is an example of GETCH() & GETCHE()*/
#include <stdio.h>
#include <conio.h>
main(int argc,char *argv[])
{
	char s,u;
	//int *p,*g;
	printf("USERNAME ");
	//p=u;
	u=getche();
	printf("\nPASSWD ");
	//g=s;
	s=_getch();
	printf("\n");
}

