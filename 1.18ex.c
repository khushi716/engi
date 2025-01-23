#include <stdio.h>
#define MAX_LENGTH 2000


int newlines(char wblanks[], int limit) {
    int c, i;
    
    
    for (i = 0; i < limit - 1 && (c = getchar()) != EOF ; i++) {
        wblanks[i] = c;
    }

    
    wblanks[i] = '\0';

    return i;
}


void removee(char wn[], char new[]) {
    int i, j = 0; 

     
    for (i = 0; wn[i] != '\0'; i++) {
        if (wn[i] != '\n' && wn[i] != '\t' && wn[i] != ' ' ) {
            new[j++] = wn[i];
        }
    }

    new[j] = '\0'; }

int main() {
    char wblanks[MAX_LENGTH];
    char new[MAX_LENGTH];
    int len;

    
    while ((len = newlines(wblanks, MAX_LENGTH)) > 0) {
        removee(wblanks, new); 
        printf("%s", new);     
    }

    return 0;
}
