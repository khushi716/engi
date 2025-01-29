/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>
#define MAX 100
void stringcat(char *s1,char *s2){
    int s = 0 ;
    while(*s1 !='\0'){
        s1++;
    }
    s1--;
    while(( *s1 = *s2) !='\0'){
       
        s1++;
        s2++;
    }
}

int main()
{
    char str1[MAX];
    strcpy(str1,"khushi");
    char str2[MAX];
    strcpy(str2,"gondliya");
    stringcat(str1,str2);
    printf("%s",str1);
    return 0;
}