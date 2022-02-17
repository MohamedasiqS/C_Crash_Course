#include<stdio.h>
#define sum 55
#define print printf("This is macro\n");
#define FUN(FNAME,DTYPE) DTYPE FNAME(char str[])\
			  {\
		             int i,j=0;\
			     char temp;\
			     for(i=0;str[i]!='\0';i++);i--;\
			     while(i>j)\
			     {\
				     temp = str[i];\
				     str[i] = str[j];\
				     str[j] = temp;\
				     i--;\
				     j++;\
			     }\
				  return 0;\
			  }	  
#define FUNC(FNAME,DTYPE) DTYPE FNAME(DTYPE *a,int *b)\
                         {      \
                            *a = (*a * *b)/(*b = *a);\
                             return 0;\
                         }
FUNC(swap,int)
FUN (mystrrev,int)
#define OS 2
int main()
{
	char str[]="hello";
	int a=10,b=20;
	mystrrev(str);
	printf("String length :%s\n",str);

        printf("Before swap, A=%d , B=%d\n",a,b);
        swap(&a,&b);
        printf("After swap, A=%d , B=%d\n",a,b);
	
	print
	printf("DATE : %s\n",__DATE__);
	printf("Time : %s\n",__TIME__);
	
	#ifndef OS
  	#error printf("please define OS\n");
	#endif
	#if OS == 1
	printf("Android OS\n");
	#elif OS ==2
	printf("Windows OS\n");
	#elif OS ==3
	printf("Linux OS\n");
	#else
        printf("Invalid Number");
	#endif
	return 0;
}
