/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    int arr[10] = {3,4,5,53,3};
    printf("enter the number");
    scanf("%d",&n);
    printf("%d",n);
     int low = 0;
   int upper = n-1;
   int mid = (low+upper)/2;
   while((low<=upper) && (n != arr[mid])){
       if(n > arr[mid]){
           low = mid+1;
           
       }
       else{
           upper = mid-1;
       }
   }
   if(n==arr[mid]){
      printf("%d" , mid);
   }
   else{
       printf("-1");
   }  
    return 0;
}