/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>
#define maxlimit 2000
void expnd(char s1[],char s2[]){
    int i = 0;
    int j =0 ;
    char c;
    while((c = s1[i]) != '\0'){
        if(s1[i+1] == '-' && s1[i+2]>='c' || s1[i+1] == '-' && s1[i+2]>='3' ){
            i=i+2;
           while(c<=s1[i]){
                s2[j] =c;
                ++c;
                ++j;
           }
        }
        else{
            s2[j] = c;
            ++j;
        }
        ++i;
    }
    s2[j] ='\0';
}

int main()
{
    char s1[maxlimit];
     strcpy(s1,"a-z0-9helloA-Z");
      char s2[maxlimit];
      expnd(s1,s2);
      printf("%s",s2);

    return 0;
}