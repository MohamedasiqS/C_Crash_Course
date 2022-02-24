#include<stdio.h>
#include<stdlib.h>
#define NODE_SIZE 5
typedef struct node
{
	int data;
	struct node *next;
}node;

node *head=0,*new=0,*latest=0,*temp=0;
void insert(int data1)
{
	new=(node*)malloc(sizeof(node));
	new->data=data1;
	new->next=0;
	if(head==NULL)
		head=new;
	else
		latest->next=new;
	latest=new;
}
void print()
{
	temp=head;
	if(temp==NULL)
		printf("Node is empty\n");

	else
	while(temp!=NULL)
	{
		printf("Data :%d\n",temp->data);
		temp = temp->next;
	}
}
int search(int key)
{
        temp=head;
	int i=1;
        if(temp==NULL)
                printf("Node is empty\n");

        else
        while(temp!=NULL)
        {
		if(temp->data==key)
		{
		return i;
		}
                temp = temp->next;
		i++;
        }
	return 0;
}
int main(void)
{
	int i=0,data,ret,key;
	while(i<NODE_SIZE)
	{
	  printf("Enter data\n");
          scanf("%d",&data);
	  insert(data);
	  i++;
	}
	print();
	printf("Enter data for search\n");
	scanf("%d",&key);
	ret = search(key);
	if(ret)
		printf("Data - %d found at %d node\n",key,ret);
	else
		printf("Data - %d not found\n",key);
	return 0;
}
