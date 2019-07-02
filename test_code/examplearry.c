/*this is an example of simple array*/
#include <stdio.h>
main(int argc,char *argv[])
{
	int arry[3],i;	//array declaration
	puts("enter elements");
	for(i=0;i<=3;i++)
	 {
		scanf("%d",&arry[i]);	//inserting elements into array
	 }
	puts("the entered array is:");
	for(i=0;i<=3;i++)
	 {
		printf("arry[%d]=%d\n",i,arry[i]);	//reading the array
	 }
}
