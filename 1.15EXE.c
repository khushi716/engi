/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define lower 0
#define upper 300
#define step 20
void fahretocel(){
    float cel;
    for(int i = lower ;i<=upper;i=i+20){
        cel = (5.0/9.0)*(i-32.0);
        printf("%d %f\n",i,cel);
    }
}
void celtofahr(){
    float fahr;
    for(int i = lower ;i<=upper;i=i+20){
        fahr = (9.0/5.0)*i+32.0;
        printf("%d %f\n",i,fahr);
    }
}
int main(){
    int choice;
   printf("enter 1 conversion fahr to cel\n");
   printf("enter 2 conversion fahr to cel");
   scanf("%d",&choice);
   if(choice == 1){
       fahretocel();
   }
   else if(choice == 2){
       celtofahr();
   } 
   else{
       printf("invalid output");
   }
   
    
}