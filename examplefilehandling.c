#include <stdio.h>
main(int argc,char *argv[])
{
	int p,p1;
	char i,arry[21];
	FILE *f;
	f=fopen("/home/sainu/firstfile.txt","w");
	fprintf(f,"hello this is my first programe of file handling in C language");
	p=fputc('c',f);
	p1=fputs("\nhere i m back#",f);
	fclose(f);
	printf("p,p1:%d %d\n\n",p,p1);
	f=fopen("/home/sainu/firstfile.txt","r");
	//fscanf(f,"%s",i); 
	//printf("%s",i);
	fgets(arry,200,f);
	printf("fgets:%s\n\n",arry);
	rewind(f);
	while(!feof(f))
	{
		
		i=getc(f);
		//if(i=='#')
		//	break;
	
		printf("%c",i);
	}

	puts("this is the end");
	fclose(f);
}
	
