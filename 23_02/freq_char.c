#include<stdio.h>
#define SIZE 10
int main(void)
{       
        char str[SIZE]="abcabcddd";
        int i=0,j,count,dup[SIZE]={};
        while(str[i]!='\0')
        {       
		count=0;
                if(dup[i]==0)
                for(j=i+1;str[j]!='\0';j++)
                {       
                        if(str[i] == str[j])
                        {
                                count++;
                                dup[j]=1;
                        }
                }
		if(count!=0)
		    printf("%c is occur %d times\n",str[i],count);
		i++;	
	}
	return 0;
}
