#include<stdio.h>
int main(){
     int c, n = 0, m = 0, p = 0;
while((c = getchar()) != EOF){
     if(c == '\t'){
       ++n;
    }
     else if(c == ' '){
         ++m;
    }
    else if(c == '\n'){
         ++p;
    }
}
 printf("%d, %d ,%d",n,m,p);
 return 0;
}