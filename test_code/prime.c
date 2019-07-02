/*this is for prime number*/
#include <stdio.h>
main(int argc,char *argv[])
{
	int i;

	puts("enter any number to check prime or not");
	scanf("%d",&i);

	(i%2==1?printf("%d is a prime number\n",i):printf("the number:%d is not prime number\n",i));

}
