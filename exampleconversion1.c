/*this is an example of * and # specifier*/
#include <stdio.h>
main(int argc,char *argv[])
{
	printf("%#x\n%#o\n%*sw\n",10,10,-20,"sanddep devrari");	//here - means start from left to width 
	printf("%*s%*sji\n",12,"sandeep",-10,"devrari");	//* specify width
	printf("%*s\n",20,"sanddep");	//here total length is 20
}
