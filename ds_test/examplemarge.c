/*this is an example of marge sort */
#include <stdio.h>
int sort(int,int);
int arry[8],tmp[8];
main(int argc,char *argv[])
{
	int a,b;
	printf("enter elements:");
	for(a=0;a<8;a++)
		scanf("%d",&arry[a]);
	puts("start sorting");
	a=7;
	b=sort(0,a);
	for(a=0;a<8;a++)
		printf("%d\t",arry[a]);
}

int sort(l,r)
{
	int mid,b,a,i;
	/*while(b<=r && a<s)
	{
		data[a]=tmp[b];
		a++;b++;
	}*/	
	if(l==r)
		return 1;
	mid=r+l/2;
	a=sort(l,mid);
	a=sort(mid+1,r);
	for(a=l,b=mid+1,i=l;a<=mid && b<=r;i++)
	{
	if(arry[a]<=arry[b])
		tmp[i]=arry[a++];
	else
		tmp[i]=arry[b++];
	}
	while(a<=mid)
		tmp[i++]=arry[a++];
	while(b<=r)
		tmp[i++]=arry[b++];
	for(i=l;i <=r;i++)
		arry[i]=tmp[i];
}
