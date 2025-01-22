#include <stdio.h>
#define tchar 128

int main()
{
    int arr[tchar];
    int c;
    for(int i = 0;i<tchar;i++){
        arr[i] = 0;
    }
    while((c=getchar())!=EOF){
        ++arr[c];
    }
   for(int i = 0 ;i<=tchar;i++){
       putchar(i);
       for(int j=0;j<arr[i];j++){
           printf("*");
       }
       printf("\n");
   }
 return 0;
}