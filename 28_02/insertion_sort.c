#include<stdio.h>
int main()
{
    int arr[]={30,45,10,20,50,25,70};
    int i,j,size,temp;
    size = sizeof(arr)/sizeof(arr[0]);
    for(i=1;i<size;i++)//This Loop for get the elements from an array
    {
        temp = arr[i];//We assign the value to temp variable for compared with other element for get sorted array
        j = i-1;
        while(j>=0 && arr[j]>temp)//This Loop checks if temp value greater than array element, element shift to leftside until element find correct position
        {
            arr[j+1] = arr[j];//It moves element to left side(sorted array)
            j--;
        }
        arr[j+1] = temp;//if element found right position the value is moved in arr[j+1] position else no changes in array element
    }
    for(i=0;i<size;i++)//After sorting,It print all elements
      printf("%d ",arr[i]);
      return 0;
}
/*
Total 7 Loop occurs

After 1st Loop - 30 45 10 20 50 25 70 
After 2nd Loop - 10 30 45 20 50 25 70
After 3rd Loop - 10 20 30 45 50 25 70
After 4th Loop - 10 20 30 45 50 25 70
After 5th Loop - 10 20 25 30 45 50 70
After 6th Loop - 10 20 25 30 45 50 70
After 7th Loop - 10 20 25 30 45 50 70
*/
