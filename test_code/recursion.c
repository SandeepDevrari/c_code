/*this is an example of recursion*/
#include <stdio.h>

void multi(int);
main(int argc,char *argv[])
{       int i;

	multi(10);



}
void multi(int n)
{
	if(n<1000000)
	 {
		multi(n*10);
		printf("\n%d\n",n);
	 }
	else
	 {
		printf("\n%d\n",n);
	 }}
