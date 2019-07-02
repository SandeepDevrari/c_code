/*this is an example of 2-dimensional arry*/
#include <stdio.h>
main(int argc,char *argv[])
{
	int a[3][3],i,j;	//declaration of 2D arry
	puts("enter elements");
	for(i=0;i<=2;i++)	//1st loop
		for(j=0;j<=2;j++)	//2nd loop
			scanf("%d",&a[i][j]);
	puts("elements of arry");
	for(i=0;i<=2;i++)	//1st loop
	 {
		for(j=0;j<=2;j++)	//2nd loop
		 {
			printf("arry[%d][%d]=%d\t",i,j,a[i][j]);
		 }			
		if(j=3)
		{
			printf("\n");	//for new line
		}
	 }
}

