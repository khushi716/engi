/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>
#define MAX 100
void stringcat(char *s1,char *s2,int n){
  while (*s1 != '\0') {
        s1++;
    }
    while(n>0 ){
        
        *s1 = *s2;
         s1++;       
        s2++;       
        n--;
    }
    *s1 = '\0';
 
}
void stringcpy(char *s1,char *s2,int n){
     while(n>0 ){
        
        *s1 = *s2;
         s1++;       
        s2++;       
        n--;
    }
    *s1 = '\0';
}
int stringcmp(char *s1,char *s2,int n){
     while(n>0 ){
        
        if(*s1 != *s2){
            return -1;
        }
        s1++;
        s2++;
        n--;
    }
    return 0;
}



int main()
{
    char str1[MAX];
    int n =3;
    strcpy(str1,"khushi");
    char str2[MAX];
    strcpy(str2,"gondaliya");
     int cmp =  stringcmp(str1,str2,n);
     printf("%d\n",cmp);
    stringcat(str1,str2,n);
    printf("%s\n",str1);
    stringcpy(str1,str2,n);
     printf("%s\n",str1);
 
    return 0;
}

