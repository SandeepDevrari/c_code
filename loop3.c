#include<stdio.h>
main()
{
int n,i,j,k;

printf("enter number of pattern:");
scanf("%d",&n);
for(i=0;i<n;i++){
for(j=0;j<n-i-1;j++){
printf(" ");
}
for(k=0;k<i;k++){
printf("*");
}
printf("\n");
}


}
