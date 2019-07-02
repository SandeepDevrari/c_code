/*this for getting factorial by using function*/
#include <stdio.h>

int fact(int);	//function declaration
main(int argc,char *argv[])
{
	int i,f;

	puts("enter the number for factorial:");
	scanf("%d",&i);
	f=fact(i);
	printf("factorial of %d is ->%d\n",i,f);

}
fact(int a)	//function defination
{
	int j,d=1;
	for(j=a;j>=1;j--)
	d=d*j;
	return d;
}
