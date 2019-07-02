/*this is a program for queue in c*/
#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int data;
	struct node *link;
}queue;
queue *front=NULL,*rear=NULL,*tmp;
int i,cont=0;
queue * create();
int count();
int insert();
int delete();
int display();
main(int argc,char *argv[])
{
	int ch;
	do{
		printf("\n\t\t\t\tMENU");
		printf("\n\t\t\t1:create\
			\n\t\t\t2:insert\
			\n\t\t\t3:delete\
			\n\t\t\t4:display\
			\n\t\t\t5:exit\n");
		printf("enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				if(front!=NULL)
				{
					puts("queue is already exist!!");
					break;
				}
				front=create();
				if(rear==NULL)
					rear=front;
				puts("queue is created###");
				break;	
			case 2:
				i=insert();
				break;
			case 3:
				i=delete();
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

queue * create()
{
	tmp=(queue *)malloc(sizeof(queue));
	if(!tmp)
	{
		puts("no queue!!");
		return NULL;
	}
	printf("enter data:");
	scanf("%d",&i);
	tmp->data=i;
	tmp->link=NULL;
	return tmp;
}	

int insert()
{
	int q;
	queue *nxt;
	if(front==NULL && rear==NULL)
	{
		puts("no front,no rear, means no queue!!");
		return 0;
	}
	nxt=create();
	rear->link=nxt;
	rear=nxt;
	return 1;
}

int delete()
{
	int q;
	queue *nxt;
	if(front==NULL && rear==NULL)
	{
		puts("no front,no rear, means no queue!!");
		return 0;
	}
	tmp=front;
	front=front->link;
	if(front==NULL)
	{
		rear=NULL;
		return 1;
	}
	free(tmp);
	return 1;
}

int display()
{
	if(front==NULL && rear==NULL)
	{
		puts("no front,no rear, means no queue!!");
		return 0;
	}
	cont=count();
	printf("total nodes : %d\n",cont);
	tmp=front;
	for(i=1;i<=cont;i++)
	{
		printf("%d\t",tmp->data);
		tmp=tmp->link;
	}
	printf("\n");
	return 1;
}

int count()
{
	int q=0;
	if(front==NULL && rear==NULL)
	{
		puts("no front,no rear, means no queue!!");
		return 0;
	}
	tmp=front;
	q=1;
	while(tmp->link!=NULL)
	{
		q++;
		tmp=tmp->link;
	}
	return q;
}	

