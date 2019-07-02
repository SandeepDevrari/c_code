/*this is an example of while*/
#include <stdio.h>

main(int argc,char *argv[])
{
	int i,k,j=1;

	puts("print any number table\nenter any number");
	scanf("%d",&i);
	while(j<=10)
	 {
		k=i*j;
		printf("\n%d*%d=%d",i,j,k);
		j++;
	 }

}
