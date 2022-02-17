#include<stdio.h>
int add();
int mystrlen();//function declaration
int a=100;//Global variable declaration

void sum()
{
  static int sum;//static variable declaration
  int i;
  for(i=0;i<5;i++)
  {
          sum = sum + i;
  }
  printf("SUM = %d\n",sum);
  return ;
}

int main()
{
        int a=80;//local variable declaration

        printf("A=%d\n",a);

        /*It print value of local variable, 
        because 1st preference goes to inside function variable declaration*/

        sum();//It gives value of sum = 10.
        sum();//It gives value of sum = 20 because in sum() static keyword used It holds value upto end of program.

        register int b=10;
        /* when regiser keyword use means value is given only through intialisation not by scanf("%d",&b);*/
        printf("Register variable :%d\n",b);

        mystrlen();

        printf("ADD:%d\n",add());
        return 0;
}
char str[10]="hello";//global string declaration

int mystrlen()
{
        int i;
        for(i=0;str[i]!='\0';i++);
        printf("String Length :%d\n",i);
        return 0;
}
 
