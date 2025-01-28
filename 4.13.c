/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>
#define maxlimit 1000

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
{
    char str[maxlimit];
    strcpy(str,"khushi");
    int l =0;
    int r = strlen(str)-1;
    reverse(str,l,r);
    printf("%s" , str);

    return 0;
}



