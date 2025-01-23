

#include <stdio.h>
#define MAX_LENGTH 2000
int newlines(char wblanks[], int limit) {
    int c, i;
    
    // Read characters until we hit a newline or the limit
    for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
        wblanks[i] = c;
    }
    
    
    wblanks[i] = '\0';


    return i;
}

void reverse(char ww[], char wn[]) {
    int len = 0;
    
    
    while (wn[len] != '\0') {
        len++;
    }

   
    for (int i = 0; i < len; i++) {
        ww[i] = wn[len - 1 - i];
    }

    
    ww[len] = '\0';
}

int main() {
    char wblanks[MAX_LENGTH];
    char wnew[MAX_LENGTH];
    int len;

    // Read and reverse the input
    while ((len = newlines(wblanks, MAX_LENGTH)) > 0) {
        reverse(wnew, wblanks);
        printf("%s\n", wnew);  
    }

    return 0;
}
