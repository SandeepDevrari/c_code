/*this is an example of string.h header file*/
#include <stdio.h>
#include <string.h>	//header file
#include <stdlib.h>
void dis(char []);
/*void strcpy(char [],char []);
void strcat(char [],char []);
int strlen(char []);
int strcmp(char [],char []);
char *strchr(char [],char);
char *strstr(char [],char []);*/
main(int argc,char *argv[])
{
	char ch,s1[10],s2[10],s4[10];
	char *p;
	int i=0,l=0;
	for(;;)
	 {
		puts("\n1:string copy\n\
		2:stirng concatenate\n\
		3:stirng length\n\
		4:string compare\n\
		5:strchr()\n\
		6:strstr()\n\
		7:exit");
		printf("enter you'r choice:");
		scanf("%d",&i);
		switch(i)
		 {
			case 1:
				puts("enter any string");
				scanf("%s",s1);
				strcpy(s4,s2);
				printf("%s\n",s4);	
				break;
			case 2:
				puts("enter any two string");
				scanf("%s%s",s1,s2);
				strcat(s1,s2);
				dis(s1);
				break;
			case 3:
				puts("enter any string");
				scanf("%s",s1);
				l=strlen(s1);
				printf("length=%d\n",l);
				break;
			case 4:
				puts("enter any two string");
				scanf("%s%s",s1,s2);
				l=strcmp(s1,s2);
				if(l==0)
					puts("strings are same");
				if(l<0)
					puts("string2 > string1");
				if(l>0)
					puts("string1 > string2");
				break;
			case 5:
				puts("enter any string");
				scanf("%s",s1);
				puts("enter a character");
				scanf("%c\n",&ch);
				p=strchr(s1,ch);
				printf("%s\n",p);
			    	break;
			case 6:
				puts("enter any two string");
				scanf("%s%s",s1,s2);
				p=strstr(s1,s2);
				printf("%s\n",p);
				break;
			case 7:
				exit(0);
			default:
				puts("you enter wrong choice");
		 }
	} 
}
void dis(char s3[10])
{
	printf("%s\n",s3);
}
