/*this is an example of list in c language*/
#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int data;
	struct node *link;
}list;
list *head,*tmp;
int i,cont=0;
list * create();
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
				if(head!=NULL)
				{
					puts("list is already created!!");
					break;
				}
				head=create();
				puts("list is created###");
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

list * create()
{
	tmp=(list *)malloc(sizeof(list));
	if(!tmp)
	{
		puts("no list!!");
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
	list *nxt;
	if(head==NULL)
	{
		puts("no list!!");
		return 0;
	}
	nxt=create();
	cont=count();
	do{
		printf("total nodes:%d\n",cont);
		printf("enter position between 1 to %d also %d:",cont+1,cont+1);
		scanf("%d",&i);
	}while(i<1 || i>cont+1);
	tmp=head;
	for(q=2;q<i;q++)
	{
		tmp=tmp->link;
	}
	if(i==1)
	{
		nxt->link=head;
		head=nxt;
		return 1;
	}
	tmp->link=nxt;
	return 1;
}

int delete()
{
	int q;
	list *nxt;
	if(head==NULL)
	{
		puts("no list!!");
		return 0;
	}
	cont=count();
	do{
		printf("total nodes:%d\n",cont);
		printf("enter positon:");
		scanf("%d",&i);
	}while(i<1 || i>cont);
	tmp=head;
	for(q=2;q<=i;q++)
	{
		nxt=tmp;
		tmp=tmp->link;
	}
	if(i==1)
	{
		head=head->link;
		free(tmp);
		return 1;
	}
	else
	{
		nxt->link=tmp->link;
		free(tmp);
		return 1;
	}
}

int display()
{
	if(head==NULL)
	{
		puts("no list!!");
		return 0;
	}
	cont=count();
	printf("total nodes : %d\n",cont);
	tmp=head;
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
	if(head==NULL)
	{
		puts("no list!!");
		return 0;
	}
	tmp=head;
	q=1;
	while(tmp->link!=NULL)
	{
		q++;
		tmp=tmp->link;
	}
	return q;
}	
	
			
