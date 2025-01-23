#include <stdio.h>
#define maxlimit 2000

int getlength(char line[], int maxline) {
    int c, i;
    
    for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
        line[i] = c;
    }

    if (c == '\n') {
        line[i] = c;
        ++i;
    }

    line[i] = '\0';  
    return i;
}


int removecom(char st[], char str[]) {
    int i = 0, j = 0;
    
    while (str[i] != '\0') {
       
        if (str[i] == '/' && str[i + 1] == '*') {
            i += 2;  
            while (str[i] != '*' || str[i + 1] != '/') {
                i++;  
            }
            i += 2;  
        }
        
        else if (str[i] == '/' && str[i + 1] == '/') {
            while (str[i] != '\n' && str[i] != '\0') {
                i++;  
            }
        }
        else {
            st[j++] = str[i++];  
        }
    }

    st[j] = '\0';  
    return j;
}

int main() {
    char arr[maxlimit], result[maxlimit];
    int len;

    
    while ((len = getlength(arr, maxlimit)) > 0) {
        removecom(result, arr);  
        printf("%s\n", result);  
    }

    return 0;
}
