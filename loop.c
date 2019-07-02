#include <stdio.h>
main(int argc,char *argv[])
{
	 int i,y=1,c,a,b,x=71,w=70;



	 for(i=1;i<=7;i++)
	  {
		for(a=65;a<=x;a++)
		{
			printf(" %c",a);}
			if(i==2)
			w=70;
			for(c=2;c<y;c++)
				printf("  ");
		for(b=w;b>=65;b--)
		printf(" %c",b);
		printf("\n");
		x--;
		w--;
		y=y+2;

	  }

}
