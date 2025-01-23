
#include <stdio.h>

int main()
{
   int i,limit,c;
   i=0;
   limit = 3000;
   char s[limit];
 while(i<=3000){
     if((c=getchar()) != '\n'){
         if(c!=EOF){
                   s[i] = c; 
                   printf("%c",s[i]);
         }
     }
         
     ++i;
 }
 
   

    return 0;
}