/* this is for checking the of int,float in system */
#include <stdio.h>
#include <limits.h>	//for int
#include <float.h>	//for float
main(int argc, char *argv[])
{
	printf("size of int-%d\n",sizeof(int));
	printf("size of float-%d\n",sizeof(float));

	printf("max float positive value-%E\n",FLT_MAX);
	printf("min float positive value-%E\n",FLT_MIN);
	printf("precision value-%d\n",FLT_DIG);
}	








