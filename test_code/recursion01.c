/*this for to find sum of first n natural no using recursion*/
#include <stdio.h>
int sum(int);
main(int argc,char *argv[])
{
	int y,x;
	puts("enter the number");
	scanf("%d",&y);
	x=sum(y);
	printf("the sun of first %d no. is:%d\n",y,x);
}
int sum(int p)
{
	if(p==0)	//this is base case
		return 0;
	else
		return (p+sum(p-1));	//recursion
}
