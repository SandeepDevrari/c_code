/*this is an example of binery tree*/
#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int data;
	struct node *L;
	struct node *R;
}tree;
int i,q=0,u,cont=0;
tree *root=NULL,*nxt=NULL;
tree * create();
int insert();
int delete();
int display();
int pre(tree *);
int post(tree *);
int in(tree *);
int count(tree *);
int delpre(tree *,tree *);
int delpost(tree *,tree *);
int delin(tree *,tree *);
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
				root=create();
				puts("tree is created###");
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

tree * create()
{
	tree *temp;
	temp=(tree *)malloc(sizeof(tree));
	if(!temp)
	{
		puts("can't create node");
		return 0;
	}
	printf("enter data:");
	scanf("%d",&i);
	temp->data=i;
	temp->L=NULL;
	temp->R=NULL;
	return temp;
}

int insert()
{
	tree *temp;
	if(root==NULL)
	{
		puts("no tree!!");
		return 0;
	}
	nxt=create();
	if((nxt->data)<=(root->data))
	{
		if(root->L==NULL)
		{
			root->L=nxt;
			puts("data is inserted##");
			return 1;
		}
		else
		{
			temp=root->L;
			do{
				while((nxt->data)<=(temp->data))
				{
					if(temp->L==NULL)
					{
						temp->L=nxt;
						puts("data is inserted##");
						return 1;					
					}
					temp=temp->L;				
				}
				while((nxt->data)>(temp->data))
				{
					if(temp->R==NULL)
					{
						temp->R=nxt;
						puts("data is inserted##");
						return 1;					
					}
					temp=temp->R;				
				}
			}while((nxt->data)!=(temp->data));	
		}
	}
	else
	{
		if(root->R==NULL)
		{
			root->R=nxt;
			puts("data is inserted##");
			return 1;
		}
		else
		{
			temp=root->R;
			do{
				while((nxt->data)<=(temp->data))
				{
					if(temp->L==NULL)
					{
						temp->L=nxt;
						puts("data is inserted##");					
						return 1;					
					}
					temp=temp->L;				
				}
				while((nxt->data)>(temp->data))
				{
					if(temp->R==NULL)
					{
						temp->R=nxt;
						puts("data is inserted##");
						return 1;					
					}
					temp=temp->R;				
				}
			}while((nxt->data)!=(temp->data));	
		}
	}
}

int delete()
{
	int p;
	if(root==NULL)
	{
		puts("no tree!!");
		return 0;
	}
	p=display();
	cont=count(root);
	do{

		printf("total nodes:%d\n",cont);
		printf("enter position here:");
		scanf("%d",&i);		
	}while(i<1 || i>cont);
	if(p==1)
	{
		u=delpre(root,NULL);	
		return 1;
	}
	else if(p==2)
	{
		u=delpost(root,NULL);
		return 1;
	}
	else
	{
		u=delin(root,NULL);
		return 1;
	}
}
int delpre(tree *temp,tree *pre)
{
        i--;
	if(i==0)
	{
		u=baby(temp,pre);
		return 1;
	}
        if(temp->L==NULL)
        {
                if(temp->R==NULL)
                {
                        return 1;
                }
                else
                {
			//pre=temp;
                        //temp=temp->R;
                        u=delpre(temp->R,temp);
                        return 1;
                }
        }
        else
        {
		//pre=temp;
                //temp=temp->L;
                u=delpre(temp->L,temp);
		if(i==0)
			return 1;
                if(temp->R==NULL)
                {
                        return 1;
                }
                else
                {
			//pre=temp;
                        //temp=temp->R;
                        u=delpre(temp->R,temp);
			if(i==0)
				return 1;
                        return 1;
                }
        }
}

int delpost(tree *temp,tree *pre)
{

        if(temp->L==NULL)
        {
                if(temp->R==NULL)
                {
			i--;
			if(i==0)
			{
				u=baby(temp,pre);
				return 1;
			}	
                        return 1;
                }
                else
                {  
                        //temp=temp->R;
                        u=delpost(temp->R,temp);
			if(i==0)
				return 1;
			i--;
			if(i==0)
			{
				u=baby(temp,pre);
				return 1;
			}
                        return 1;
                }
        }
        else
        {
                //temp=temp->L;
                u=delpost(temp->L,temp);
		if(i==0)
			return 1;   
                if(temp->R==NULL)
                {
			i--;
			if(i==0)
			{
				u=baby(temp,pre);
				return 1;
			}
                        return 1;
                }
                else
                {
                        //temp=temp->R;
                        u=delpost(temp->R,temp);
			if(i==0)
				return 1;
			i--;
			if(i==0)
			{
				u=baby(temp,pre);
				return 1;
			}
                        return 1;
                }
        }
}


int delin(tree *temp,tree *pre)
{

        if(temp->L==NULL)
        {
		i--;
		if(i==0)
		{
			u=baby(temp,pre);
			return 1;
		}
                if(temp->R==NULL)
                {
 
                        return 1;
                }
                else
                {
                        //temp=temp->R;
                        u=delin(temp->R,temp);
			if(i==0)
				return 1;
                        return 1;
                }
        }
        else
        {
                //temp=temp->L;
                u=delin(temp->L,temp);
		if(i==0)
			return 1;
		i--;
		if(i==0)
		{
			u=baby(temp,pre);
			return 1;
		}
                if(temp->R==NULL)
                {
                        return 1;
                }
                else
                {
                        //temp=temp->R;
                        u=delin(temp->R,temp);
			if(i==0)
				return 1;
                        return 1;
                }
        }
}


int baby(tree *temp,tree *pre)
{
	if(pre==NULL)
	{
		nxt=temp->L;
		if((nxt->data)==(temp->data))	
		{
			root=nxt;
			nxt->R=temp->R;
			printf("root:%d is deleted##\n",temp->data);
			return 1;
		}
		else
		{
			root=temp->R;
			nxt=temp->R;
			do{
				if(nxt->L==NULL)
				{
					nxt->L=temp->L;
					printf("root:%d is deleted##\n",temp->data);
					return 1;
				}
				nxt=nxt->L;
			}while(nxt->L!=temp->L);	
		}
	}
	if(temp->L==NULL)
	{
		if(temp->R==NULL)
		{
			if(temp==pre->L)
			{
				pre->L=NULL;
				printf("%d is deleted##\n",temp->data);
				return 1;
			}
			else
			{
				pre->R=NULL;
				printf("%d is deleted##\n",temp->data);
				return 1;
			}
		}
		if(temp==pre->L)
		{
			pre->L=temp->R;
			printf("%d is deleted##\n",temp->data);
			return 1;
		}
		else
		{
			pre->R=temp->R;
			printf("%d is deleted##\n",temp->data);
			return 1;
		}
	}	
	else
	{
		if(temp->R==NULL)
		{
			pre->R=temp->L;
			printf("%d is deleted##\n",temp->data);
			return 1;
		}
		nxt=temp->L;
		if((nxt->data)==(temp->data))	
		{
			pre->L=nxt;
			nxt->R=temp->R;
			printf("%d is deleted##\n",temp->data);
			return 1;
		}
		else
		{
			pre->L=temp->R;
			nxt=temp->R;
			do{
				if(nxt->L==NULL)
				{
					nxt->L=temp->L;
					printf("%d is deleted##\n",temp->data);
					return 1;
				}
				nxt=nxt->L;
			}while(nxt->L!=temp->L);	
		}
	}
}



int display()
{

	int p;
	printf("\n\t\t\t\tDISPLAY MENU");
	printf("\n\t\t\t1:DLR\
		\n\t\t\t2:LRD\
		\n\t\t\t3:LDR");
	printf("\nenter here:");
	scanf("%d",&i);
	switch(i)
	{
		case 1:
			if(root==NULL)
			{
				puts("no tree!!");
				return 0;
			}
			p=pre(root);
			break;
		case 2:
			if(root==NULL)
                        {
                                puts("no tree!!");
                                return 0;
                        }
			p=post(root);
			break;
		case 3:
			if(root==NULL)
                        {
                                puts("no tree!!");
                                return 0;
                        }
			p=in(root);
			break;
		default:
			puts("seriously????");
			exit(0);
	}
	return i;
}

int pre(tree *temp)
{
	printf("%d\t",temp->data);
        if(temp->L==NULL)
        {
		if(temp->R==NULL)
		{
			return 1;
		}
                else
		{   
			//temp=temp->R;
			u=pre(temp->R);
			return 1; 
		}
	}
	else
	{
        	//temp=temp->L;
		u=pre(temp->L);	
		if(temp->R==NULL)
                {
                        return 1;
                }
		else
		{
			//temp=temp->R;
			u=pre(temp->R);
			return 1;
		}
	}
}


int post(tree *temp)
{

        if(temp->L==NULL)
        {
                if(temp->R==NULL)
                {
			printf("%d\t",temp->data);	
                        return 1;
                }
                else
                {  
                        //temp=temp->R;
                        u=post(temp->R);
			printf("%d\t",temp->data);
                        return 1;
                }
        }
        else
        {
                //temp=temp->L;
                u=post(temp->L);   
                if(temp->R==NULL)
                {
			printf("%d\t",temp->data);
                        return 1;
                }
                else
                {
                        //temp=temp->R;
                        u=post(temp->R);
			printf("%d\t",temp->data);
                        return 1;
                }
        }
}

int in(tree *temp)
{

        if(temp->L==NULL)
        {
		printf("%d\t",temp->data);
                if(temp->R==NULL)
                {
 
                        return 1;
                }
                else
                {
                        //temp=temp->R;
                        u=in(temp->R);

                        return 1;
                }
        }
        else
        {
                //temp=temp->L;
                u=in(temp->L);
		printf("%d\t",temp->data);
                if(temp->R==NULL)
                {

                        return 1;
                }
                else
                {
                        //temp=temp->R;
                        u=in(temp->R);

                        return 1;
                }
        }
}



int count(tree *temp)
{
        if(temp->L==NULL)
        {
		q++;
		//printf("%d\t",q);
                if(temp->R==NULL)
                {

                        return q;
                }
                else
                {
                        //temp=temp->R;
                        u=count(temp->R);

                        return q;
                }
        }
        else
        {
                //temp=temp->L;
                u=count(temp->L);
		q++;
		//printf("%d\t",q);
                if(temp->R==NULL)
                {

                        return q;
                }
                else
                {
                        //temp=temp->R;
                        u=count(temp->R);

                        return q;
                }
        }
	//printf("return:%d\t",q);
	return q;
}

