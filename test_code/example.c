/*this is a example for if else*/
#include <stdio.h>
main(int argc,char *argv[])
{
	int subfirst,subsecond,subthird,subfourth,subfifth,subsixth,subfirstmax,subsecondmax,subthirdmax,subfourthmax,subfifthmax,subsixthmax,per,total		,totalmax,name;
	printf("enter you'r name:\t);
	scanf("
	printf("want to check your percentage");
	printf("\nplease enter the marks of 6 subject with there maximum marks\n");

	printf("subject first");
	scanf("\n%d",&subfirst);
	printf("subfirst max");
	scanf("\n%d",&subfirstmax);
	if(subfirst>=subfirstmax)
	 {
		printf("please enter correct digit");
	 }
	else
	 {
		printf("\nsubsecond");
		scanf("\n%d",&subsecond);
		printf("subsecond max");
		scanf("\n%d",&subsecondmax);
		if(subsecond>=subsecondmax)
		 {
			printf("please enter correct digit");
		 }
		else
		 {
			printf("\nsubthird");
			scanf("\n%d",&subthird);
			printf("subthird max");
			scanf("\n%d",&subthirdmax);
			if(subthird>=subthirdmax)
			 {
				printf("please enter correct digit");
			 }
			else
			 {
				printf("\nsubfourth");
				scanf("\n%d",&subfourth);
				printf("subfourth max");
				scanf("\n%d",&subfourthmax);
				if(subfourth>=subfourthmax)
				 {
					printf("please enter correct digit");
				 }
				else

				 {
					printf("\nsubfifth");
					scanf("\n%d",&subfifth);
					printf("subfifth max");
					scanf("\n%d",&subfifthmax);
					if(subfifth>=subfifthmax)
					 {
						printf("please enter correct digit");
					 }
					else
  					 {
						printf("\nsubsixth");
						scanf("\n%d",&subsixth);
						printf("subsixth max");
 						scanf("\n%d",&subsixthmax);
						if(subsixth>=subsixthmax)
						 {
							printf("please enter correct digit");
						 }
					 }
				 }
 			}
		}
	}
	total=subfirst+subsecond+subthird+subfourth+subfifth+subsixth;
  	totalmax=subfirstmax+subsecondmax+subthirdmax+subfourthmax+subfifthmax+subsixthmax;
 	per=total/6;
	printf("\n%d\n%d",total,totalmax);
	if(per>=60)
	 {
		printf("\nu got %d (first division)",per);
 	 }
	if((per>=50)&&(per<60))
	 {
		printf("\nu got %d (second division)",per);
	 }
	if((per>=40)&&(per<50))
	 {
		printf("\n u got %d (third division)",per);
	 }
	if(per<40)
	 {
		printf("u got %d (fail)",per);
	 }

}
