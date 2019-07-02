/*this is for operator*/
#include <stdio.h>
int main(int argc,char *argv[])
{
	int a,b,c;
	printf("enter any two number\t");
	scanf("%d %d",&a,&b);
	if(a!=0 && b!=0)
	 {
		printf("both are non-zero\n");
		return 0;
	 }
	else
	 {
		if(a==0 || b==0)
		 {
			printf("either a or b is zero\n");
			return 0;
		 }
		else
		 {
			printf("u enter a=%d and b=%d\n",a,b);
			return 0;
		 }
		printf("try again!");
	 }
	return 0;
}	
	

