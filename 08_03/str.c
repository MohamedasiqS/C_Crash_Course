#include<stdio.h>

#define L_VOWEL (*(str_arg1+i) == 'a'|| *(str_arg1+i) == 'e' || *(str_arg1+i) == 'i' || *(str_arg1+i) == 'o' || *(str_arg1+i) == 'u')
#define U_VOWEL (*(str_arg1+i) == 'A'|| *(str_arg1+i) == 'E' || *(str_arg1+i) == 'I' || *(str_arg1+i) == 'O' || *(str_arg1+i) == 'U')
#define CHECK_BOTH_CHAR_SAME_OR_NOT (*(str_arg1+i) == *(str_arg2+j)|| *(str_arg1+i) == *(str_arg2+j)+32 || *(str_arg1+i)+32 == *(str_arg2+j))

int compare(const char *arr_arg,const char data)   //This Function restrict repeated vowel letters
{
        int i=0;
        while(arr_arg[i]!='\0')
        {
                if(arr_arg[i] == data || arr_arg[i] == data+32 || (arr_arg[i])+32 == data )  //If repeated letter found return 1 else return 0
                        return 1;
                i++;
        }
        return 0;
}

char* vowels(const char *str_arg1,const char *str_arg2)
{
        int ret,k=0,i,j;
        static char arr[]={};
        for(i=0;*(str_arg1+i) != '\0';i++)      //This Loop for str_arg1 traverse upto '\0'
        {
                for(j=0;*(str_arg2+j) != '\0';j++)      //This Loop for str_arg2 traverse upto '\0'
                {
                        if(L_VOWEL || U_VOWEL)  //If condition checks *(str_arg1+i) variable is vowel or not
                        {
                                if(CHECK_BOTH_CHAR_SAME_OR_NOT)  //If condition checks both variables is same or not 
                                {
                                        ret = compare(arr,*(str_arg2+j));  //To avoid repeated Letters
                                        if(ret==0)
                                                arr[k++] = *(str_arg2+j);    //Vowels letters stored in arr[]
                                }
                        }
                        else
                                break;  //if(L_VOWEL || L_VOWEL) fails control go back to ith loop
                }
        }
        return arr;
}

int main(void)
{
        char *str1 = "AEIOU",*str2 = "australia",*ptr=NULL;
        char* (*fp) (const char*,const char*);
        fp = vowels;
        ptr = fp(str1,str2);
        printf("Same vowel letters in both string : %s\n",ptr);
        return 0;
}

