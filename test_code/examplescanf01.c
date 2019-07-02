/* programe for scanf()check*/
#include<stdio.h>
main(int argc,char *argv[])
{
	int a,b,c;
	char str[40];   /*here we take an array */

	printf("enter:");
	scanf("%[ ABCDEFGHIJKLMNOPQRSTUVWXYZ]",str); /*here A-Z are in uppercase, data except only uppercase*/
	printf("%s",str); /*printed  only uppercase data */
	printf("\nenter value of a b c");
	scanf("%4d %4d %4d",&a,&b,&c);  /*here we same fixed field width*/
	printf("a=%d,b=%d,c=%d",a,b,c);


}
