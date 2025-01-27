#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#define MAXLIMIT 100  
void reverse(char str2[]) {
    int l = 0;
    int k = strlen(str2) - 1;  
    char t;
    
    while (l < k) {
        t = str2[l];
        str2[l] = str2[k];
        str2[k] = t;
        l++;
        k--;
    }
}
    void itoa(char str1[],int n,int p ){
        int sign = n;
        int i = 0 ;
        if(sign<0){
            n = -n;
        }
        do{
            str1[i++] = (n%10) + '0'; 
        }while((n/=10)>0);
        if(sign <0){
            str1[i++] = '-';
        }
        while(i<p){
            str1[i++] = ' ';
        }
        str1[i] = '\0';
       reverse(str1);
    }
     


int main() {
    char str2[MAXLIMIT];
    
    
   int x = -234;
   int  p =2;
    itoa(str2,x,p);
    
    printf("%s", str2);

    return 0;
}
