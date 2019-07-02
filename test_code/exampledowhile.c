/*this is an example of do while*/
#include <stdio.h>

main(int argc,char *argv[])
{
	char again;
	int num;

	do{	//starting loop
		puts("enter a number");
		scanf("%d",&num);
		printf("square of %d is %d",num,num*num);
		puts("\nwant to enter another number y/n");
		scanf("%c\n",&again);
	}while(again=='y');	//ending loop

}
