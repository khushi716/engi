/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define maxlimit 4000
#include<string.h>
void escape(char s[],char t []){
    int i;
    i=0;
    int in;
    in=0;
    while(s[i] != '\0'){
        switch (s[i]){
            case '\n':
                  t[in] = 'n';
                  ++in;
                  ++i;
                  break;
             case ' ':
             t[in] = 's';
              ++in;
                ++i;
                break;
                 
              case '\t':
             t[in] = 't';
              ++in;
                ++i;
                break;
                
                default:
                t[in++] = s[i++];
                    
        }
    }
     t[in] = '\0';
    
}
int main()
{
   char str1 [maxlimit];
     char str2 [maxlimit];
     strcpy(str1,"khushi\ngondaliyafscg\ttab");
     escape(str1,str2);
     printf("%s",str2);
    return 0;
}




