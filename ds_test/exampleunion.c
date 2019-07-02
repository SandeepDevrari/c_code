/*this is an example of union in C*/
#include <stdio.h>
union profile
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
		pro1.fn[i]=e;
	 }
	e='a';
	printf("first name %s\n",pro1.fn);
	printf("last name ");
	for(i=0;e!='\n';i++)
	 {
		e=getchar();
		pro1.ln[i]=e;
	 }
	e='a';
	printf("last name %s\n",pro1.ln);
	puts("sex");
	for(i=0;e!='\n';i++)
	 {
		e=getchar();
		pro1.sex[i]=e;
	 }
	printf("sex %s\n",pro1.sex);
	puts("DOB");
	puts("day:");
	scanf("%d\n",&i);
	printf("day %d\n",pro1.dd);
	pro1.dd=i;
	printf("month:");
	scanf("%d\n",&i);
	printf("month %d\n",pro1.mm);
	pro1.mm=i;
	printf("year:");
	scanf("%d\n",&i);
	printf("year %d\n",pro1.yy);
	pro1.yy=i;
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
	 }
	e='a';	
	puts("adress ");
	for(i=0;e!='\n';i++)
	 {
		e=getchar();
		pro1.add[i]=e;
	 }
}
