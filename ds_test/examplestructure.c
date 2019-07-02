/*this is an example of structure in C*/
#include <stdio.h>
#include <string.h>
struct profile
 {
	char fn[8];
	char ln[8];	
	char sex[5];
	int dd;
	int mm;
	int yy;
	int num[9];
	char email[30];
	char add[30];
 }pro1;
main(int argc,char *argv[])
{
	int i=0,n=0;
	char e;
	printf("first name ");
	for(i=0;e!='\n';i++)
	 {
		e=getchar();
		//if(e=='\n');
			//pro1.fn[i]='\0';
		pro1.fn[i]=e;
	 }
	e='a';
	printf("last name ");
	for(i=0;e!='\n';i++)
	 {
		e=getchar();
		//if(e=='\n');
			//continue;
		pro1.ln[i]=e;
	 }
	e='a';
	puts("sex");
	for(i=0;e!='\n';i++)
	 {
		e=getchar();
		//if(e=='\n');
			//continue;
		pro1.sex[i]=e;
	 }
	/*if(pro1.sex=="male")
	 {
		printf("Hello mr.%s",pro1.fn);
		//printf("%s",pro1.ln);
	 }	
	else
	 {
		printf("Hello ms.%s\n",pro1.fn);
	 }*/
	puts("DOB");
	puts("day:");
	scanf("%d\n",&i);
	pro1.dd=i;
	printf("month:");
	scanf("%d\n",&i);
	pro1.mm=i;
	printf("year:");
	scanf("%d\n",&i);
	pro1.yy=i;
	//i=2016-i;
	//printf("so you'r %d year old\n",i);
	printf("you'r mobile number\n");	
	for(i=0;i<=9;i++)
	 {
		n=getchar();
		pro1.num[i]=n;
	 }
	e='a';	
	printf("email ");
	for(i=0;e!='\n';i++)
	 {
		e=getchar();
		pro1.email[i]=e;
		//if(e=='\n')
			//continue;
	 }
	e='a';	
	puts("adress ");
	for(i=0;e!='\n';i++)
	 {
		e=getchar();
		pro1.add[i]=e;
		//if(e=='\n')
			//continue;
	 }
	//printf("PHONE NUMBER %d%d%d%d%d%d%d%d%d%d\n",pro1.num[0],pro1.num[1],pro1.num[2],pro1.num[3],pro1.num[4],pro1.num[5],pro1.num[6],pro1.num[7],pro1.num[8],pro1.num[9]);
	//printf("EMAIL:%s\n",pro1.email);
	//printf("ADDRESS:%s\n",pro1.add);
}
