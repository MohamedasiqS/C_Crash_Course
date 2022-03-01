#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
   int data;
   struct node *link;
}node;
void createnode(int data_arg,node **head,node **tail)
{
     node *new = (node*)malloc(sizeof(node));
     new->data = data_arg;
     new->link = NULL;
     if(*head == NULL)
	  *head = new;
     else
	  (*tail)->link = new;
     *tail = new;
}
void delete(node **head,node **tail)
{
    if(*head == NULL)
       printf("All nodes are deleted\n");
    else
    {
       node *temp1=(*head),*temp2=NULL;
       while(temp1->link!=NULL)
       {
	 temp2  = temp1;
	 temp1  = temp1->link;
       }
        *tail = temp2;
	(*tail)->link=NULL;
        free(temp1);
	temp1 = NULL;
    }    
    return ;
}
void display(node **head)
{
    if(*head==NULL)
        printf("All nodes are deleted\n");
    else
    {
	node *temp=(*head);
	while(temp!=NULL)
	{
	     printf("Data : %d\n",temp->data);
	     temp = temp->link;
	}
    }
    return ;
}
int main()
{
	node *head= NULL,*tail = NULL;
	createnode(10,&head,&tail);
	createnode(20,&head,&tail);
	createnode(30,&head,&tail);
        createnode(40,&head,&tail);
	display(&head);
	delete(&head,&tail);
        delete(&head,&tail);
	delete(&head,&tail);
	display(&head);
	return 0;
}
