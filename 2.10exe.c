/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>
#include<ctype.h>
#define maxlimit 3000
void toupp(char chr[],char a[]){
    int i;
    i=0;
    char ch;
    int count;
    while(a[i] != '\0'){
        toupper(a[i])?count == 0:count==1;
      ch =   (count == 0) ? tolower(a[i]):toupper(a[i]);
       chr[i] = ch;
        ++i;
    }
}

int main()
{
    char a[maxlimit];
   char chr[maxlimit];
    strcpy(a,"kHushI");
    toupp(chr,a);
    printf("%s",chr);

    return 0;
}