/*program for insertion_sort(incresing order of elements) in array*/
#include <stdio.h>
int insertion(int[],int);
//double time;
//time_t time1,time2;
main(int argc,char *argv[])
{
	int ary[6],i;
	//randomize();
	printf("enter numbers:");
	for(i=0;i<6;i++)
	   	scanf("%d",&ary[i]);
	printf("insertion short for array:\n");
	//time1=clock();
	i=insertion(ary,6);  /*calling function */
	//time=(double)(time2-time1)/CLK_TCK;
        //printf("time:%f\n",time);
}

int insertion(int data[],int n)     /*function declearation*/
{
	int k,d,t,elemnt;
	for(k=1;k<n;k++)
	{
		elemnt=data[k];
		printf("##element:%d\n",elemnt);
		for(d=k-1;d>=0;d--)    /*inner loop for sort*/
		{
			if(elemnt<data[d]) /*condition*/
			{
				t=data[d];          //interchanging elements
                		data[d]=elemnt;
                		data[d+1]=t;
			}
		}



		printf("after completing %d time inner loop\t",k);
		for(d=0;d<n;d++)
			printf("%d\t",data[d]);
		printf("\n");
	}
	//time2=clock();
	printf("sorted arry:\t");
	for(k=0;k<n;k++)   /*echo(display) array*/
		printf("%d\t",data[k]);
	printf("\n");

	return 1;
}
