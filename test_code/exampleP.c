/*this is an example of formate %p*/
#include <stdio.h>
main(int argc,char argv[])
{
	int i=0;
	char *p;
	printf("address of i:%p\n",&i);
	printf("enter an address: ");
	scanf("%p",&p);
	printf("value at location %p is %c\n",p,*p);
}
