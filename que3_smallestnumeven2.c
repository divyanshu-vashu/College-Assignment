/*
3.Write a C program that outputs the smallest ‘i’ such that xiand xi+1are both even. 
In above case 6. (Because 12 and 10 are even).
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
       if (arr[i]%2==0 && arr[i+1]%2==0)
       {
           printf("index is %d,%d and value is %d,%d ",i,i+1,arr[i],arr[i+1]);
           break;
       }
       
   }
    return 0;
}
