#include<stdio.h>
int mystrlen(char str[])
{
	int i=1;
	while(str[i]!='\0')
	{
		i++;
	}
	printf("String length : %d\n",i);
	return i;
}
void mystrcpy(char des[],char str[])
{
	int i=0;
	while(str[i]!='\0')
	{
		des[i]=str[i];
		i++;
	}
	des[i]='\0';
	printf("copied string is %s\n",des);
	return ;
}
void mystrlwr(char str[])
{
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=65&&str[i]<=90)
			str[i]+=32;
	}
	printf("String Lowercase : %s",str);
	return;
}
void mystrupr(char str[])
{
        int i;
        for(i=0;str[i]!='\0';i++)
        {
                if(str[i]>=97&&str[i]<=122)
                        str[i]-=32;
        }
        printf("String Uppercase : %s",str);
        return;
}
void mystrrev(char arr[])
 {
	 int i=0,n;
	 n=mystrlen(arr);
	 n--;
	 char temp;
	 while(i<n)
	 {
	 temp=arr[i];
	 arr[i]=arr[n];
	 arr[n]=temp;
	 i++;
	 n--;
	 }
	 printf("string reverse %s\n",arr);
	 return ;
 }
void mystrcat(char str[],char str1[])
{
	int i=0,j=0;
	while(str[i]!='\0')
	i++;
	while(str1[j]!='\0')
	{
		str[i]=str1[j];
		i++;
		j++;
	}
	str[i]='\0';
	printf("concatenate string %s\n",str);
	return ;
}
int main()
{
	int choice;
	char str[]="HeLloWorLd",des[20],str1[]="GoodMorning";
	printf("Enter choice\n");
	printf("1.mystrlen\n");
	printf("2.mystrcpy\n");
	printf("3.mystrlwr\n");
	printf("4.mystrupr\n");
	printf("5.mystrrev\n");
	printf("6.mystrcat\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			mystrlen(str);
			 break;
		case 2:
			 mystrcpy(des,str);
			 break;
		case 3:
			 mystrlwr(str);
			 break;
		case 4:
			 mystrupr(str);
			 break;
		case 5:
			 mystrrev(str);
			 break;
		case 6:
			 mystrcat(str,str1);
			 break;
		default:
			 printf("Enter valid number\n");
	}
	return 0;
}
