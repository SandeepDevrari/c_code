/*this is an example of TYPEDEF*/
#include <stdio.h>
typedef int p;	//typedef
typedef char s;
main(p argc,s *argv[])
{
	p a;
	printf("total number of arguments %d\n",argc);
	for(a=1;a<=argc;a++)
	{
	 printf("argument no-%d and  argument is-%s\n",a,argv[a]);
	}
}
