#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

char ch = 65;
pthread_mutex_t mutex;
void* capital(void *ptr)
{
        while(ch <= 90)
        {
                pthread_mutex_lock(&mutex);
		sleep(1);
                printf("%c ",ch);
		ch++;
                pthread_mutex_unlock(&mutex);
        }
	printf("\n");
}
void* small(void *ptr)
{
	pthread_mutex_lock(&mutex);
	ch+=6;
        while(ch<=122)
        {
                sleep(1);
		printf("%c ",ch);
		ch++;
	}
        pthread_mutex_unlock(&mutex);
	printf("\n");
}

int main(void)
{
     pthread_t newthread[2];
     pthread_mutex_init(&mutex,NULL);
     pthread_create(&newthread[0],NULL,&capital,NULL);
     pthread_create(&newthread[1],NULL,&small,NULL);
     pthread_join(newthread[0],NULL);
     pthread_join(newthread[1],NULL);
     pthread_mutex_destroy(&mutex);
     return 0;
}
