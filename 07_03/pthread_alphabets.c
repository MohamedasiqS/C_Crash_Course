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
		pthread_mutex_lock(&mutex);  //It block to execute until other thread 2 ( small() ) completed
		printf("%c\n",ch);
		ch++;
		sleep(1);
		pthread_mutex_unlock(&mutex);  //It entimate to thread 1 ( capital() ) completed
	}
	ch += 6;
}

void* small(void *ptr)
{
	while(ch <= 122)
        {
		pthread_mutex_lock(&mutex);  //It block to execute until other thread 1 ( capital() ) completed
                printf("%c\n",ch);
		ch++;
		sleep(1);	
		pthread_mutex_unlock(&mutex);  //It entimate to thread 2 ( small() ) completed
        }
}

int main(void)
{
     pthread_t newthread[2];	
     if(pthread_mutex_init(&mutex,NULL)!=0)//mutex intialisation 
     {
	     perror("mutex fails\n");
	     exit(1);
     }
     pthread_create(&newthread[0],NULL,&capital,NULL);	//pthread[0] is created
     pthread_create(&newthread[1],NULL,&small,NULL);    //pthread[1] is created 
     pthread_join(newthread[0],NULL);			//After pthread[0] used it ends with this statement
     pthread_join(newthread[1],NULL);			//After pthread[1] used it ends with this statement
     pthread_mutex_destroy(&mutex);			//After use mutex destroyed by this statement
     return 0;
}

