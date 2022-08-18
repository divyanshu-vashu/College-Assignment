/*
Write a C program, which outputs all local maximums of a given data of elements.
A number xiis a local maximum if it is more than both xi-1 and xi+1.
If theelements are 25, 19, 22, 23, 21, 12, 10, 17, 11, 13, 10 then 23, 17 and 13 are local maximums.
*/


#include<stdio.h>
int main(){ 
   int n;
   printf("Enter the size of array\n");
   scanf("%d",&n);
   int arr[n];
   for (int i = 0; i < n; i++)
   {
       scanf("%d",&arr[i]);
   }
   for (int i = 1; i < n-1; i++)
   {
       if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
           printf("index is %d and value is %d \n",i,arr[i]);
       }
       
   }
   
   
    return 0;
}
