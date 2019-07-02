/*program for selection_sort(decreasing order of elements) in array*/
#include <stdio.h>
int selection(int[],int);
//double time;
//time_t time1,time2;
main(int argc,char *argv[])
{
	int ary[5],i;
	//randomize();
	printf("enter numbers:");
	for(i=0;i<5;i++)
	   	scanf("%d",&ary[i]);
	printf("selection short for array:\n");
	//time1=clock();
	i=selection(ary,5);  /*calling function */
	//time=(double)(time2-time1)/CLK_TCK;
        //printf("time:%f\n",time);
}

int selection(int data[],int n)     /*function declearation*/
{
	int k,d,t,small;
	for(k=0;k<n-1;k++)
	{
		small=k;
		for(d=k+1;d<n;d++)    /*inner loop for sort*/
		{
			if(data[small]>data[d]) /*condition*/
				small=d;
			printf("##small:%d\n",data[small]);
		}
		t=data[k];          //interchanging elements
		data[k]=data[small];
		data[small]=t;
		printf("after completing %d time inner loop\t",k);
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
