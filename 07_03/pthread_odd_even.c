#include<stdio.h>
#include<pthread.h>
int end = 10;
int data =0;
pthread_mutex_t mutex;
void* odd(void *ptr)
{
	pthread_mutex_lock(&mutex);
	while(data<=end)
	{
		if(data%2!=0)
		{
			printf("ODD : %d\n",data);
		}
		data++;
	}
	pthread_mutex_unlock(&mutex);
	return 0;
}

void* even(void *ptr)
{
	pthread_mutex_lock(&mutex);
	data=0;
        while(data<=end)
        {
		if(data%2==0)
                {
                        printf("Even : %d\n",data);
                }
		data++;
        }
	pthread_mutex_unlock(&mutex);
}

int main(void)
{
	pthread_t t1,t2;
	pthread_mutex_init(&mutex,NULL);
	pthread_create(&t1,NULL,odd,NULL);
	pthread_create(&t2,NULL,even,NULL);
	pthread_join(t1,NULL);
	pthread_join(t2,NULL);
	pthread_mutex_destroy(&mutex);
	return 0;
}
