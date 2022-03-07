#include<stdio.h>
#include<pthread.h>
#define END 50
int data =0;
void* odd(void *ptr)
{
	while(data<=END)
	{
		if(data%2!=0)
		{
			printf("%d\n",data);
			data++;
		}
	}
}

void* even(void *ptr)
{
        while(data<=END)
        {
                if(data%2==0)
                {
                        printf("%d\n",data);
                        data++;
                }
        }
}

int main(void)
{
	pthread_t t1,t2;
	pthread_create(&t1,NULL,odd,NULL);
	pthread_create(&t2,NULL,even,NULL);
	pthread_join(t1,NULL);
	pthread_join(t2,NULL);
	return 0;
}
