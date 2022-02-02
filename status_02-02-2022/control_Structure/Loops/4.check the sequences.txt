#include<stdio.h>

int main()
{
    int arr[]={1,2,2,3,3,3,4,4,4,4,5,5,5,5,5};
    int a,i,count,val=0,size,add=-1;
    size = sizeof(arr)/sizeof(arr[0]);
  
    while(val<size)
    {
       i=val;
       count=0;
       a=0;
    while(arr[i]==arr[val])
    {
        i++;
        count++;
    }
    if(count==arr[val])
    {
        ++add;
        val += add;      
        a=1;
    }
        else
          break;
    val++;
    }
    if(a)
        printf("valid\n");
        else
    printf("Invalid\n");
    return 0;
}
