/*this is for storage classes in C*/
#include <stdio.h>
int c=1;
extern void check(void);	//function declaration
main(int argc,char *argv[])
{
	int b=3;
	auto int i=1;
	register int a=5;
	 {
		auto int i=2;
		{
			auto int i=3;
			register int a=4;
			printf("Block 3\ti value:%d and a=%d\n",i,a);
			
		}
		printf("Block 2\ti value:%d\n",i);
	 }
	printf("Block 1\ti value:%d and a=%d\n",i,a);
	for(b;b>=0;b--)
	 {
		check();
	 }
}

