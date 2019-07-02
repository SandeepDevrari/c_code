#include<stdio.h>
#include <conio.h>
main()
{
	char ch='A';


	printf("\npress any key to continue");
	getch(); /*will not echo(display) the chracter*/
	ch=putch(ch);
	printf("\n");
	putch('Z');

	printf("\ntype any character");
	ch=getche(); /*will echo character typed*/

	printf("\ntype any character");
	ch=getchar(); /*will echo character, must be followed by enter key*/
	putchar(ch);
	printf("\n");
	putchar('Z');

	printf("\ncontinue Y/N");
	fgetchar(); /*will echo character,must be followed by enter key*/
	ch=fputchar(ch);
	printf("\n");
	fputchar('Z');



}
