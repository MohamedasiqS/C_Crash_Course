#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
     int data;
     struct node *link;
}node;

void push(node **top_arg,int ndata)
{
	node *new = (node*)malloc(sizeof(node));
	if(new==NULL)
	{
	      printf("Memory is not allocated\n");
	}
	else
	{
		new->data=ndata;
		new->link=NULL;
		if(*top_arg==NULL)
		{
		   *top_arg=new;
		   printf("Push occured :%d\n",ndata);
		}
		else
		{
		     printf("Push occured :%d\n",ndata);
		     new->link=*top_arg;
		     *top_arg=new;
		}
	}
	return ;
}
void pop(node **top_arg)
{
	if(*top_arg==NULL)
		printf("All Node is empty\n");
	else
	{
		node *temp=NULL;
		temp = *top_arg;
		*top_arg = temp->link;
		printf("Data poped :%d\n",temp->data);
		free(temp);
	}
	return ;
}
void peek(node **top_arg)
{
	printf("Top element in stack is %d\n",(*top_arg)->data);
	return ;
}
void display(node **top)
{
	node *temp=*top;
	if(temp==NULL)
		printf("Stack is empty\n");
	else
	{
		printf("Display all elements\n");
		while(temp!=NULL)
		{
			printf("Data:%d\n",temp->data);
			temp = temp->link;
		}
	}
	return ;
}
int main(void)
{
     node *top=NULL;
     push(&top,10);
     push(&top,20);
     push(&top,30);
     display(&top);
     peek(&top);
     pop(&top);
     push(&top,40);
     pop(&top);
     display(&top);
     peek(&top);
     return 0;
}
