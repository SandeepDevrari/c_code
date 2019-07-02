/*this is a program for creating files and writing data into file*/
#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
main(int argc,char *argv[])
{
	FILE *f;
	char i;
	if(argc!=2)
	{
		printf("try again!! with file name\n");
		exit(1);
	}
	else {
	f=fopen(argv[1],"w");
	if(f==NULL)
	{
		puts("file can't open!!");
		exit(1);
	}
	puts("to terminate,enter #!");
	do {
		i=getchar();
		putc(i,f);
	}while(i!='#');
	fclose(f);
	}
}
