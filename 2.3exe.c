#include <stdio.h>

void string_to_hex(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
       
        printf("%02X ", (unsigned char)str[i]);
        i++;
    }
    printf("\n");
}

int main() {
    char str[100];
    int ch;
    int i = 0;


    printf("Enter a string: ");
    while ((ch = getchar()) != '\n' && ch != EOF && i < 100) {
        str[i] = ch;
        i++;
    }
    str[i] = '\0';  
    
    printf("String in Hexadecimal: ");
    string_to_hex(str);

    return 0;
}
