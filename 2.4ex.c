/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>
int maxlimit=3000;
int main()
{
    extern int maxlimit;
    char str1[maxlimit];
    char str2[maxlimit];
    char str3[maxlimit];
    char str4[maxlimit];
    
    strcpy(str1,"khushi");
    strcpy(str2,"khurte");
    int i,in,min;
    in = i = 0;
   
    int len1,len2;
    len1 = strlen(str1);
    len2 = strlen(str2);
    
    if(len1>len2){
        min = len2;
        strcpy(str3,str2);
    }
    else if(len2>len1){
        min = len1;
        strcpy(str3,str1);
    }
    else{
         min = len1;
        strcpy(str3,str1);
    }
    
    while(min !=0){
        if(str1[i] == str2[i]){
            ++i;
        }
        else{
            str4[in++] = str3[i];
            ++i;
        }
        --min;
    }
    printf("str:%s",str4);
    return 0;
}



