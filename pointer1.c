/*this is for incrementing pointer*/
#include <stdio.h>
const int MAX=3;
main(int argc,char *argv[])
{
	int var[]={10,100,200};
	int i;
	unsigned int *ptr;	//initilizing pointer
	ptr=var;	//pointing 

	for(i=0;i<MAX;i++)
	 {
		//printf("Address of var[%d]=%x\n",i,ptr);	//what store
		printf("Value of var[%d]=%d\n",i,*ptr);	//pointing
		ptr++;	//incrementing

	 }
}
