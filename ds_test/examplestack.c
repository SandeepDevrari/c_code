/*this is a program for implementing stack through list*/
#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int data;
	struct node *nxt;
	struct node *pre;
}stck;
stck *top,*tmp;
int i,cont=0;
stck * create();
int count();
int push();
int pop();
int display();
main(int argc,char *argv[])
{
	int ch;
	do{
		printf("\n\t\t\t\tMENU");
		printf("\n\t\t\t1:create\
			\n\t\t\t2:push\
			\n\t\t\t3:pop\
			\n\t\t\t4:display\
			\n\t\t\t5:exit\n");
		printf("enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				if(top!=NULL)
				{
					puts("stack is already created!!");
					break;
				}				
				top=create();
				puts("stack is created###");
				break;	
			case 2:
				i=push();
				break;
			case 3:
				i=pop();
				break;
			case 4:
				i=display();
				break;
			case 5:
				exit(1);
			default:
				puts("try again beta!!");
				exit(0);
		}
	}while(1);
}

stck * create()
{
	tmp=(stck *)malloc(sizeof(stck));
	if(!tmp)
	{
		puts("no stack!!");
		return NULL;
	}
	printf("enter data:");
	scanf("%d",&i);
	tmp->data=i;
	tmp->nxt=NULL;
	tmp->pre=NULL;
	return tmp;
}	

int push()
{
	int q;
	stck *next;
	if(top==NULL)
	{
		puts("no top, no stack!!");
		return 0;
	}
	next=create();
	top->nxt=next;
	next->pre=top;
	top=next;
	 return 1;
}

int pop()
{
	int q;
	stck *next;
	if(top==NULL)
	{
		puts("no stack!!");
		return 0;
	}
	tmp=top;
	if(top->pre==NULL)
	{
		top=NULL;
		//free(top);
		return 1;
	}
	top=tmp->pre;
	top->nxt=NULL;
	free(tmp);
	return 1;
}

int display()
{
	if(top==NULL)
	{
		puts("no stack!!");
		return 0;
	}
	cont=count();
	printf("total nodes : %d\n",cont);
	tmp=top;
	for(i=cont;i>=0;i--)
	{
		printf("%d\t",tmp->data);
		tmp=tmp->pre;
	}
	printf("\n");
	return 1;
}

int count()
{
	int q=0;
	if(top==NULL)
	{
		puts("no stack!!");
		return 0;
	}
	tmp=top;
	while(tmp->pre!=NULL)
	{
		q++;
		tmp=tmp->pre;
	}
	return q;
}
