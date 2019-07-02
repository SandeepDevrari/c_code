/*this is part of fharen to cel*/
#include <stdio.h>
extern float fhar,cel,n;
void fharen() 
{


//upp=300
//low=0

	puts("enter fharenhiet digit:");
	scanf("%f",&n);
	if(n<=300.00)
	 {
		fhar=n;
		puts("fharenhiet\tcelsius");
		cel=5*(fhar-32)/9;	//formula for fharen to celsius
		printf("%f\t->\t%f\n",fhar,cel);
	 }
	else
	 {	
		printf("you enter over,\tmax fharenhiet>300\n");
	 }
}
