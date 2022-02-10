/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void swap(void *a,void *b)
{
    *(int *)a = ( *(int*)a * *(int *)b)/(*(int*)b = *(int *)a);
    printf("After swap : A =%d,B=%d\n",*(int*)a,*(int*)b);
    return ;
}
int main()
{
    int a=10,b=20;
    printf("Before swap : A = %d , B =%d\n",a,b);
    swap(&a,&b);
    return 0;
}
