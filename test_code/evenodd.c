/*this is for even odd*/
#include <stdio.h>
main(int argc,char *argv[])
{
	int i;

	puts("enter any number");
	scanf("%d",&i);
	(i%2==0?printf("%d is even number\n",i):printf("%d is odd number\n",i));		//case condition

}
