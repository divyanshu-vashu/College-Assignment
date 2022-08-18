/*
Write a C program that outputs the smallest ‘i’ such that xiis even. 
For example, 22 is the output  for the input 25, 19, 22, 23, 21, 12, 10, 17, 11, 13, 10  
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
   for (int i = 0; i < n; i++)
   {
       if (arr[i]%2==0)
       {
           printf("index is %d and value is %d ",i,arr[i]);
           break;
       }
       
   }
   
   
   
   
    return 0;
}
