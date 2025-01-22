#include <stdio.h>

int main()
{
     int ch;
    ch = getchar();
    while(ch != EOF){
        if(ch == ' '){
            putchar('\n');
        }
        else if(ch == '\t'){
            putchar('\n');
        }
        
        else{
            putchar(ch);
        }
        ch=getchar();
    }
 return 0; 
}