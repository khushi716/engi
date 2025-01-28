#include <stdio.h>
#define MAX 1000
#define BUFF 100
int getch(void);
void ungets(int c);
void uget(char srt2[]);
int getline_custom(char str[], int maxlimit);

int main() {
    char str1[MAX];
    getline_custom(str1, MAX); 
    int c; 
    uget(str1);
    while((c = getch())!= EOF){
        putchar(c);
    }

    return 0;
}


int getline_custom(char str[], int limit) {
    int c, i;
    
   
    for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
        str[i] = c;
    }
    
   
    if (c == '\n') {
        str[i] = c;
        i++;  
    }
    
  
    str[i] = '\0';
    
    return i;
}
void uget(char str2[]){
    int count = 0;
    while(str2[count] != '\0'){
        ++count;
    }
    while(count>0){
        ungets(str2[--count]);
    }
}
int buff = 0;
int buffer[BUFF];
void ungets(int c){
    if(buff<=BUFF){
        buffer[++buff]= c;
    }
    else{
        printf("buffer is full");
    }
}

int getch(void){
    if(buff>0){
        return buffer[--buff];
    }
    else{
        return getchar();
    }
    
}