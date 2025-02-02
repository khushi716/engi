// /******************************************************************************

//                             Online C Compiler.
//                 Code, Compile, Run and Debug C program online.
// Write your code in this editor and press "Run" button to compile and execute it.

// *******************************************************************************/




#include <stdio.h>
#include <string.h>
#include<ctype.h>
#include<stdlib.h>
#define MAX 3000
#define STACK 200
#define BUFF 200
#define NUMBER '1'

int getline_new(char *s, int maxlimit) {
    int ch;
    int i;
    char *t = s;
    for (i = 0; i < maxlimit - 1 && (ch = getchar()) != EOF && ch != '\n'; i++) {
        *s++ = ch;
        if (ch == '\n') {
            *s++ = ch;
        }
    }
    *s = '\0';
    return s - t;  
}

int sp=0;
char value[STACK];
void push(double f){
    if(sp<STACK){
        value[sp++] = f;
    }
    else{
        printf("stack is full");
    }
}

double pop(void){
    if(sp>0){
        return value[--sp];
    }
    else{
        printf("stack is underflow");
    }
}
int buffer[BUFF];
int b =0 ;
void ungetch(int c){
    if(b>BUFF){
        printf("over");
    }
    else{
        buffer[b++] = c; 
    }
}
int getch(void){
    return (b>0)?  buffer[--b]:getchar();
}

int getop(char *s){
    int c;
    while((*s = c = getch()) == ' ' || '\t'){
        ;
    }
    *(s+1) = '\0';
    if(!isdigit(c) && c != '.'){
        return c;
    }
    if(isdigit(c)){
        while(isdigit(*++s = c= getch()));
    }
    if(c == '.'){
         while(isdigit(*++s = c= getch()));
    }
    *s = '\0';
    if(c != EOF){
        ungetch(c);
    }
    return NUMBER;
}

void itoa(int n,char*s){
    int sign = 0;
    if(n<0){
        sign = 1;
        n = -n;
    } 
    do{
        *s++ = n%10+'0';
    }while((n/=10)>0);
    
    if(sign == 1){
        *s++ = '-';
    }
    *s = '\0';
}


int atio(char *s){
    int n,sign;
   for(;isspace(*s);s++){
       ;
   }
    sign =(*s == '-') ? -1:1;
    if(*s == '+'|| *s == '-'){
        s++;
    }
    for(n=0;isdigit(*s);s++){
         n =10 * n + *s -'0';
    }
    return sign*n;
}


void reverse(char *s) {
    int l = 0;
    int r = strlen(s) - 1; 
    char temp;  
    int sign = 0;

    while (l < r) {  
        
        temp = *(s + l);
        *(s + l) = *(s + r);
        *(s + r) = temp;

        l++;
        r--;
    }
}

int main() {
    char line[MAX];
  char line2[MAX];
  strcpy(line2,"56");
  int n = -254;
    char line1[MAX];
    
    getline_new(line, MAX);
     itoa(n,line1);
     printf("%s\n", line1);
    reverse(line);
    
    printf("Reversed string: %s\n", line);
    
    
    int convert= atio(line2);
    printf("%d",convert);
    int type ;
    char str[MAX];
    while((type = getop(str)) !=EOF){
        switch(type){
            case NUMBER :
            push(atof(str));
            break;
            case '+':
            push(pop() + pop());
            break;
             case '-':
            push(pop() - pop());
            break;
             case '*':
            push(pop() * pop());
            break;
            default:
            printf("error");
            break;
        }
    }
  
    
    return 0;
}
