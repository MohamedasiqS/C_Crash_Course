#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>
char ch = 65;
pthread_mutex_t mutex;
void* capital(void *ptr)
{
	while(ch <= 90)
	{
		printf("%c\n",ch);
		sleep(1);
	}
}

void* small(void *ptr)
{
	while(ch <= 90)
        {
		pthread_mutex_lock(&mutex);
                printf("%c\n",ch+32);
		ch++;
		sleep(1);
		pthread_mutex_unlock(&mutex);
        }
}

int main(void)
{
     pthread_t newthread[2];	
     if(pthread_mutex_init(&mutex,NULL)!=0)
     {
	     perror("mutex fails\n");
	     exit(1);
     }
     pthread_create(&newthread[0],NULL,&capital,NULL);
     pthread_create(&newthread[1],NULL,&small,NULL);     
     pthread_join(newthread[0],NULL);
     pthread_join(newthread[1],NULL);
     pthread_mutex_destroy(&mutex);
     return 0;
}

