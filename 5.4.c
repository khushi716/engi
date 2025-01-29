/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>
#define MAX 100
int stringcat(char *s1,char *s2){
    int s = 0 ;
    int len1 = strlen(s1);
    int len2= strlen(s2);
     s1 = s1 + len1 - len2;
    
  while(*s1 != '\0' && *s2 != '\0'){
        if(( *s1 != *s2)){
       
        return 0;
    }
    s1++;
    s2++;
  
  }
  return 1;
 
}

int main()
{
    char str1[MAX];
    strcpy(str1,"khushigondaliya");
    char str2[MAX];
    strcpy(str2,"gondaliya");
    int len=stringcat(str1,str2);
    printf("%d",len);
    return 0;
}


