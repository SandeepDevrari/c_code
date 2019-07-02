/*this is an example of how to passing arry as an argument*/
#include <stdio.h>
int funarry(int []);
main(int argc,char *argv[])
{
	int a[3],i,sum=0;
	puts("enter numbers");
	for(i=0;i<=3;i++)
		scanf("%d",&a[i]);
	sum=funarry(a);	//passing arry as argument
	printf("sum of array elements is:%d\n",sum);
}
int funarry(int p[])	//receving arry
{
	int s=0,i;
	for(i=0;i<=3;i++)
		s=s+p[i];
	return s;
}
