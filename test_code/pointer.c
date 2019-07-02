/*this is for pointer*/
#include <stdio.h>
main(int argc,char *argv[])
{
	int a=5,*p,**q;	//pointer declaration
	char l;

	p=&a;
	q=&p;
	puts("guess the ans for following equation note(a=5,p=&a,q=&p)");
	puts("1:*p=a+3\n2:*p=*p-2\n3:*p=**q-(*p)\n4:**q=*p+ **q\n");
	printf("in first *p=%d,**q=%d\n",*p,**q);
	printf("press n to see result");
	scanf("%c",&l);
	if(l='n')
	 {
		*p=a+3;
		printf("in 1st*p=%d\n",*p);
		*p=*p-2;

		printf("in 2nd*p=%d\n",*p);
		*p=**q-(*p);
		printf("in 3rd*p=%d,**q=%d\n",*p,**q);
		**q=*p+ **q;
		printf("in 4th:a=%d, *p=%d,**q=%d",a,*p,**q);
		puts("\nso is you're result match this,this is How pointer works");
		return 0;
	 }
	printf("you press other!");

}

