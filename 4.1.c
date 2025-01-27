// /******************************************************************************

//                             Online C Compiler.
//                 Code, Compile, Run and Debug C program online.
// Write your code in this editor and press "Run" button to compile and execute it.

// *******************************************************************************/

#include <stdio.h>
#include <string.h>
 #define maxlimit 1000
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


int findposition(char str1[]) {
    int i = 0;
    
    reverse(str1);
    int k = strlen(str1);
    
    while(str1[i] != '\0') {
        if(str1[i] == 't') {
            return k-i; 
        }
        i++;
    }
    return -1;  
}

int main() {
    char str[maxlimit];
    int c;
    int i = 0;

   
    while (i < maxlimit - 1 && (c = getchar()) != EOF) {
        str[i] = c;
        if(c =='\n'){
            str[i] = c;
         }
        i++;
    }

    str[i] = '\0'; 
    int pos = findposition(str);
   
    printf("%d\n", pos);

    return 0;
}
