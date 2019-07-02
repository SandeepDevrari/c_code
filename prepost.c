/*this is for pre and post increment*/
#include <stdio.h>
main(int argc,char *argv[])
{
	int x=2 ,y,z;

	y=--x;        //here first perform x-1 and then put it on y(it's called prefix operation)
	z=x--;       //here first put value of x in z and then perform x-1 (it's called postfix operation)
	printf("%d\n%d\n%d\n",y,z,x);

}
