/*this is an example of continue*/
#include <stdio.h>
main(int argc,char *argv[])
{
	int i,j;

	for(i=1;i<=2;i++)
	 {
		for(j=1;j<=2;j++)
		 {
			if(i==j)
			continue;	//continue to inner loop without print

			printf("%i %i\n",i,j);
		 }
	 }

}
