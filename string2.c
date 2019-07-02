/*another example of string*/
#include <stdio.h>

main(int argc,char *argv[])
{
	char i,a[200];
	int s=0;
	puts("enter taxt");
	do
	 {
		i=getchar();
		a[s]=i;	
		
		s++;	
	 }
	while(i!='+');
	//s--;
	//a[s]='\0';
	printf("\n%s\n",a);
}
