/*this is for getting factorail by recursion*/
#include <stdio.h>
int fact(int);	//function declaration
main(int argc,char *argv[])
{
	int a,b;
	puts("enter any number");
	scanf("%d",&b);
	a=fact(b);
	printf("factorial=%d\n",a);
}
int fact(int n)	//function defination
{
	int f;
	if(n==1)
		return 1;
	else
		f=n*fact(n-1);	//recalling function
		return f;
}
