/*this for sending and receving values between function*/
#include <stdio.h>
int calsum(int,int,int);
main(int argc,char *argv[])
{
	int a,b,c,sum;
	printf("enter any three numbers:");

	scanf("%d%d%d",&a,&b,&c);
	sum=calsum(a,b,c);
	printf("sum=%d\n",sum);
}
int calsum(int a,int b,int c)
{
	int d;
	d=a+b+c;
	return d;
}
