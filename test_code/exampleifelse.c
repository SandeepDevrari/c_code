/*this is example of if else*/
#include<stdio.h>
main(int argc,char *argv[])
{
	float costp,sellp,profit,loss;

	puts("enter cost price and selling price ");
	scanf("%f%f",&costp,&sellp);
	profit=sellp-costp;
	if(profit>0.00)
		printf("u get profit:%f\n",profit);
	else
	 {
		loss=costp-sellp;
		printf("u get loss:%f\n",loss);
	 }


}
