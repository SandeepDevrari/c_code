/*this is a part of fharen to cel */
#include <stdio.h>
extern float fhar,cel,n;
void celsius()
{


//low=-17;
//upp=148;
	printf("enter celsius digit:");
	scanf("%f",&n);
	if(n<=148.00)
	 {
		cel=n;
		fhar=32+(9*cel)/5;
		printf("celsius=%f\t->\tfharenhiet=%f\n",cel,fhar);
	 }
	else
	 {
		printf("you enter over,\tmax celsius>148\n");
	 }

}

