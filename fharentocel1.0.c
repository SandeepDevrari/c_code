/*this is for convert fharen to cel and vice versa*/
#include <stdio.h>
#include <stdlib.h>

extern void celsius(void);
extern void fharen(void);
float cel,n,fhar;
main(int argc,char *argv[])
{
	int ch;

	while(1)	//infinite loop
	 {
		printf("1:fharenhiet\n2:celsius\n3:exit\nTYPE HERE:");
		scanf("%d",&ch);
		switch(ch)	//starting switch
		 {
			case 1:
       			 {
	 			fharen();
				break; }
			case 2:
			 {
				 celsius();
				 break; }

			case 3:
				exit(0);

			default:
				puts("you enter wrong\n");

		 }	//ending switch
	 }

}










































