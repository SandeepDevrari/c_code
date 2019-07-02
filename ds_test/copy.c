/*tihs program is for coping a file*/
#include <stdio.h>
main(int argc,char *argv[])
{
	FILE *f,*a;
	char c,s[69];
	int i;
	f=fopen("/home/sainu/sainu.jpg","rb");
	a=fopen("/home/sainu/sainu1.jpg","wb");
	i=fread(&s,sizeof(char),69947,f);
	printf("%d",i);
	i=fwrite(&s,sizeof(char),69947,a);
	printf("%d",i);
	puts("done");
	//while(!feof(f))
	//{

		//c=fgetc(f);
		/*if(c==EOF)
			//break;
		//else*/
	//	fputc(c,a);
	//}
	fclose(f);
	fclose(a);
}
