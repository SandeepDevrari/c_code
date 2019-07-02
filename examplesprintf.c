/*this is an example of sprintf()*/
#include <stdio.h>
main(int argc,char *argv[])
{
	int i=10;
	char ch='A';
 	float a=3.14;
	char str[10];
	sprintf(str,"%d%c%f",i,ch,a);	//sprintf()
	printf("%s",str);
}

