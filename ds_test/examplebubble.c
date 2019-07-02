/*program for bubble_sort(increasing order of elements) in array*/
#include <stdio.h>
int bubble(int[],int);
//double time;
//time_t time1,time2;
main(int argc,char *argv[])
{
	int ary[6],i;
	//randomize();
	printf("enter numbers:");
	for(i=0;i<6;i++)
	   	scanf("%d",&ary[i]);
	printf("bubble short for array:\n");
	//time1=clock();
	i=bubble(ary,6);  /*calling function */
	//time=(double)(time2-time1)/CLK_TCK;
        //printf("time:%f\n",time);
}

int bubble(int data[],int n)     /*function declearation*/
{
	int k,d,t,i;
	for(k=1;k<n;k++)
	{
		for(d=0;d<n-k;d++)    /*inner loop for sort*/
		{
			if(data[d]>data[d+1]) /*condition*/
			{
				t=data[d];          //interchanging elements
				data[d]=data[d+1];
				data[d+1]=t;
			}
			printf("##completing %d step inner loop\t",d);
                	for(i=0;i<n;i++)
                        	printf("%d\t",data[i]);
                	printf("\n");
		}
		printf("\nafter completing %d time inner loop\t",k);
		for(d=0;d<n;d++)
			printf("%d\t",data[d]);
		printf("\n");
	}
	//time2=clock();
	for(k=0;k<n;k++)   /*echo(display) array*/
		printf("%d\t",data[k]);
	printf("\n");

	return 1;
}
