/*this is an example*/
#include <stdio.h>

main(int argc,char *argv[])
{
	float km ,m,cm,inch,feet;

	printf("enter distance(km) b/w two cities ");
	scanf("\n%f",&km);
	m=km*1000;
	cm=km*100000;
	inch=km*39370.1;
	feet=km*3280.84;
	printf("\ndistance b/w in meter:%f",m);
	printf("\ndistance b/w cities in centemeter:%f",cm);
	printf("\ndistance b/w in in inches:%f",inch);
	printf("\ndistance b/w in feet:%f",feet);

}
