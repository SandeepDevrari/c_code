/*this is an example of fread() & fwrite()*/
#include <stdio.h>
main(int argc,char *argv[])
{
	int i;
	char c[50],*s;
	FILE *f;
	s=c;
	puts("enter anything:");
	scanf("%s",s);
	//gets(s);
	f=fopen("fread.txt","w");
	i=fwrite(&c,sizeof(char),50,f);
	printf("%d",i);
	fclose(f);
}
