

#include <stdio.h>
#define maxlength 1000
void copy(char to[],char from[]){
    int i ;
    i =0;
    while((to[i]=from[i])!='\0' ){
        ++i;
    }
}
int getlength(char line[],int maxline){
    int c,i;
    for( i =0;i<=maxline-1 && (c=getchar()) != EOF;i++ ){
        line[i] = c;
        if(c == '\n'){
            line[i] = c;
            ++i;
        }
        
    }
    line[i] = '\0';
    return i;
}

int main()
{
    char line[maxlength];
    char longest[maxlength];
    int len,max,i;
    i=0;
    while((len = getlength(line,maxlength))> 0){
        if(len > max){
            max = len;
            copy(longest,line);
        }
        if(max>0){
            printf("%s",longest);
        }
    }

    return 0;
}