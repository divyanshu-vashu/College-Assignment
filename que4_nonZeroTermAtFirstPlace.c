/*
Given an integer array, move all0's to the end of it while maintaining the relative order of the non-zero elements.
*/

#include<stdio.h>
int main(){ 
   int n;
   printf("Enter the size of array \n");
   scanf("%d",&n);
   int arr[n];
   int arr1[n];
   for (int i = 0; i < n; i++)
   {
      scanf("%d",&arr[i]);
   }
   int m=0,c=0;
   for (int i = 0; i < n; i++)
   {
       if (arr[i]>0)
       {
           arr1[m]=arr[i];
           m=m+1;
           c=c+1;
       }
       
   }
   for (int i = 0; i < n-c; i++)
   {
       arr1[m]=0;
       m=m+1;
   } 
   for (int i = 0; i < n; i++)
   {
       printf("%d ",arr1[i]);
   }
    return 0;
}
