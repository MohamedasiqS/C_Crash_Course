#include<stdio.h>
void bubblesort(int *arr,int size)
{
   int i,j,flag=0;
   for(i=0;i<size-1;i++)//This Loop is used for compare element again until we get right sorting order
   {
     for(j=0;j<size-i-1;j++)//This Loop is used to compare each element
     {
	 if(arr[j]>arr[j+1])    
	 {    
	    arr[j]   = arr[j] ^ arr[j+1];
	    arr[j+1] = arr[j] ^ arr[j+1];
	    arr[j]   = arr[j] ^ arr[j+1];
            flag=1;
	 }  
     }
     if(flag==0)//It avoid to run loop when sorting is done before loop terminated.
	     break;
   }   
   return ;
}
int main(void)
{
    int arr[]={55,76,33,41,20,5},size,i;
    size = sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,size);
    for(i=0;i<size;i++)//Display all elements
	    printf("%3d",arr[i]);
    return 0;
}
/*
  1) After 1st jth Loop - 55 76 33 41 20 5
     After 2nd jth Loop - 55 33 76 41 20 5
     After 3rd jth Loop - 55 33 41 76 20 5	
     After 4th jth Loop - 55 33 41 20 76 5
     After 5th jth Loop - 55 33 41 20 5 76

     After 1st ith Loop - 55 33 41 20 5 76

  2) After 1st jth Loop - 33 55 41 20 5 76
     After 2nd jth Loop - 33 41 55 20 5 76 
     After 3rd jth Loop - 33 41 20 55 5 76      
     After 4th jth Loop - 33 41 20 5 55 76
    
    After 2nd ith Loop - 33 41 20 5 55 76

  3) After 1st jth Loop - 33 41 20 5 55 76
     After 2nd jth Loop - 33 20 41 5 55 76
     After 3rd jth Loop - 33 20 5 41 55 76 
     
     After 3rd ith Loop - 33 20 5 41 55 76 

  4) After 1st jth Loop - 20 33 5 41 55 76
     After 2nd jth Loop - 20 5 33 41 55 76
     
     After 4th ith Loop - 20 5 33 41 55 76 

  5) After 1st jth Loop - 5 20 33 41 55 76
          
     After 5th ith Loop - 5 20 33 41 55 76

 */
