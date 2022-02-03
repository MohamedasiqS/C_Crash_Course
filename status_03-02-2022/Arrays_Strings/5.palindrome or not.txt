#include <stdio.h>
#include<string.h>
void mystrrev(char *str1)
{
    int i,j=0;
    char temp;
    i=strlen(str1);
    --i;
    while(i>j)
    {
        temp = str1[i];
        str1[i] = str1[j];
        str1[j] = temp;
        j++;
        i--;
    }
    printf("string1%s\n",str1);
    return ;
}
int main()
{
   char str[20],str1[20];
   printf("Enter string\n");
   scanf("%s",str);
   strcpy(str1,str);
   mystrrev(str1);
   
   if(strcmp(str,str1)==0)
    printf("String is palindrome\n");
   else
     printf("String is not palindrome\n");
    return 0;
}
