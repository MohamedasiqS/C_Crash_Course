#include<stdio.h>
int main()
{
   char choice;
   int a,b;
   printf("Enter choice 'a' for add or 's' for sub\n");
   scanf(" %c",&choice);
   switch(choice)
   {
       case 'a':
       {
           printf("Addition\n");
           printf("Enter two numbers\n");
           scanf("%d%d",&a,&b);
           printf("Answer : %d\n",a+b);
       }
       break;
       case 's':
       {
           printf("Subtraction\n");
           printf("Enter two numbers\n");
           scanf("%d%d",&a,&b);
           printf("Answer : %d\n",a-b);
       }
       break;
     default:
        printf("defaut case- noaction\n");
   }
   return 0;
}
