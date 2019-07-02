/*this is an example of bit fields*/
#include <stdio.h>
#include <string.h>
struct	//simple structure
{
	int width;
	int height;
}status1;
struct
{
	int width: 1;
	int height: 1;
}status2;
main(int argc,char *argv[])
{
	printf("memory size of status1:%lu\n",sizeof(status1));
	printf("memory size of status2:%lu\n",sizeof(status2));
}	
