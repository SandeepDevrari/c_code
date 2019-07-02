#include <stdio.h>
#define AND &&
#define OR ||
main(int argc,char *argv[])
{
	int f=1,x=4,y=90;
	if((f<5)AND(x<=20 OR y>=4))
		printf("\nyour computer");
	else
		printf("\nin front of you");
}
