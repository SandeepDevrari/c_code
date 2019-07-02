
/*this is for leap year*/
#include <stdio.h>
main(int argc,char *argv[])
{
	int year;

	puts("enter any year to check leap year");
	scanf("%d",&year);
	(year%4==0?printf("the year: %d is a leap year means febrary has 29 days\n",year):printf("the year: %d isn't a leap year means febrary has 28 days\n",year));

}
