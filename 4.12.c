/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define maxlimit 1000
#include<string.h>
void itoa(char str1[],int n,int j){
   
    if( n== 0){
        str1[j] = '\0';
        return;
    }
    
    str1[j] = n%10+'0';
    itoa(str1,n/10,j+1);
    
}
void reverse(char str1[],int l,int r){
   
    int ch;
  
    if(l>=r){
        return;
    }
    ch = str1[r];
    str1[r] = str1[l];
    str1[l] = ch;
   
    reverse(str1,l+1,r-1);
}


int main()
{ int no;
int i;
i=0;
  int negtive  = 0;
  char str1[maxlimit];
  printf("enter number");
  scanf("%d",&no);
  if(no<0){
      no = -no;
      negtive  = 1;
  }
  itoa(str1,no,i);
  
  int le = 0;
  int ri = strlen(str1)-1;
  reverse(str1,le,ri);
 if(negtive == 1){
      printf("-%s",str1);
 }
 else{
      printf("%s",str1);
 }
    return 0;
}

