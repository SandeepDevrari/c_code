/*this is an example of conversion specifier*/
#include <stdio.h>
main(int argc,char *argv[])
{
	int i;
	unsigned int e;
	long int f;
	long unsigned int g;
	char a,d[5],*c;
	float b;
	//integer
	printf("enter any signed integer:");
	scanf("%d\n",&i);
	printf("integer:%d\noctal:%o\nhexa:%x\nhexa caps:%X\nsize:%lu\n",i,i,i,i,sizeof(i));
	printf("enter any unsigned integer:");
	scanf("%u\n",&e);
	printf("unsigned integer:%u\noctal:%o\nhexa:%x\nhexa caps:%X\nsize:%lu\n",e,e,e,e,sizeof(e));
	printf("enter any long integer:");
	scanf("%ld\n",&f);
	printf("size:%lu\n",sizeof(f));
	printf("enter any long unsigned integer:");
	scanf("%lu\n",&g);
	printf("size:%lu\n",sizeof(g));
	//character
	printf("enter any character:");
	scanf("%c\n",&a);
	//float
	printf("enter any float number:");
	scanf("%f\n",&b);
	printf("float:%f\ndouble:%lf\nexponent:%e\nsize:%lu\n",b,b,b,sizeof(b));
	//string
	printf("enter any string:");
	scanf("%s\n",d);
	printf("size:%lu\n",sizeof(d));
	//other
	printf("g:%g\n",b);
	printf("enter th no of characters:");
	scanf("%n\n"&i);
	printf("n:%n\n",&i);
	printf("p:%p\n",c);
}
