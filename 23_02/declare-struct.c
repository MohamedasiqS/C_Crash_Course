#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	char data;
	struct node *sptr;
}node;
int main(void)
{
	int i=0;
	node *head=0,*new =0,*latest=0,*temp=0;
	while(i<5)
	{
	  new = (node*)malloc(sizeof(node));
   	  new->data='A'+i;
    	  new->sptr =0;
    	  if(head==0)
           head=new;
    	  else
           latest->sptr=new;
   	   latest=new;
	   i++;
	}
	
	i=0;
	while(i<5)
	{
	  printf("%c",head->data);
	  head=head->sptr;
	  i++;
	}
	return 0;
}

