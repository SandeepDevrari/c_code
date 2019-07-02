/*this is an example of conversion specifier*/
#include <stdio.h>
main(int argc,char *argv[])
{
	int i;
	printf("enter th no of characters:");
	scanf("%n\n",&i);
	printf("n:%n\n",&i);
}
