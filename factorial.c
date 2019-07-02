/*this is for getting factorial of any number*/
#include <stdio.h>
main(int argc,char *argv[])
{
	int c,n, fact=1;

	puts("enter any number to calculate it's factorial");
	scanf("%d",&n);
	for(c=1;c<=n;c++)	//loop for factorial
	 {
		fact=fact*c;
		printf("%d=%d*%d\n",fact,fact,c);
	 }

	printf("factorial of %d=%d\n",n,fact);

}
