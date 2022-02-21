#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int divide(int,int);
int main()
{
	int (*ptr[]) (int,int) = {add,sub,mul,divide};
	int a,b,n;
	char ch;
label:	printf("Enter choice from 1 to 4\n");
        printf("1.Addition\n");
        printf("2.Subtraction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");
        scanf("%d",&n);
        printf("Enter A and B Value\n");
        scanf("%d%d",&a,&b);
	ptr[n-1](a,b);
	printf("If you want to continue press 'y' or 'n'\n");
        scanf(" %c",&ch);
        if(ch=='y')
                goto label;
	return 0;
}
int add(int a,int b)
{
	printf("ADD : %d\n",a+b);
	return 0;
}
int sub(int a,int b)
{
        printf("SUB : %d\n",a-b);
        return 0;
}
int mul(int a,int b)
{
        printf("MULTIPLY : %d\n",a*b);
        return 0;
}
int divide(int a,int b)
{       
        printf("DIVIDE : %d\n",a/b);
        return 0;
} 
