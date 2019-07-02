/*this is second joint part of storageclass.c*/
#include <stdio.h>
extern int c;
void check(void)
{
	static int l=1;
	printf("value of l=%d\n",l);
	l++;
	printf("value of extern c=%d\n",c);
}
