#include<stdio.h>
#include<stdlib.h>
#define NODE_SIZE 3
typedef struct node
{
	char data;
	struct node *link;
}node;

node *head=0,*new =0,*latest=0,*temp=0;

void insert(int data1)
{
	new = (node*)malloc(sizeof(node));
        new->data = data1;
        new->link = head;
        if(head==NULL)
          head=new;
        else
          latest->link=new;
        latest=new;
	return ;
}

void display()
{
	temp = head;
	if(temp==NULL)
		printf("Node is Empty\n");
	else
	{
          while(temp->link!=head)
          {
            printf("%-4d",temp->data);
            temp=temp->link;
          }
          printf("%-4d",temp->data);
	}
	return ;
}
int main(void)
{
	int data,i=0;
	while(i<NODE_SIZE)
	{
	printf("Enter Data\n");
	scanf("%d",&data);
	insert(data);
	i++;
	}
	display();
	return 0;
}


