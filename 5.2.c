/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/








#include<stdio.h>
#include<ctype.h>

#define SIZE 1000
#define BUFSIZE 100

char buf[BUFSIZE];
int bufp = 0;


int getch(void) {
    return (bufp > 0) ? buf[--bufp] : getchar();
}


void ungetch(int c) {
    if (bufp >= BUFSIZE)
        printf("ungetch: too many characters\n");
    else
        buf[bufp++] = c;
}


int getint(float *pn) {
    int c, sign;
    float power;
    while (isspace(c = getch()));

    if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
        ungetch(c); 
        return -1; 
    }

    sign = (c == '-') ? -1 : 1;

    if (c == '+' || c == '-')
        c = getch();
   
    if (!isdigit(c))
        return 0;
    for (*pn = 0.0; isdigit(c); c = getch())
       {
            *pn = 10 * *pn + (c - '0');
       }

    *pn *= sign;
    if(c == '.'){
       c= getch();;
    }
    
 for (power=1.0; isdigit(c); c = getch())
        {
            *pn = 10 * *pn + (c - '0');
             power *=10.0;
        }
        
    *pn *= sign/power;
    if (c != EOF)
        ungetch(c);

    return c;
}

int main(void)
{
    int s;
    float array[SIZE];int n;

    for(n=0;n<SIZE && getint(&array[n]) !=EOF; n++){
        printf("storing in n = %d, getint %f\n", n, array[n]);
    }

   

    for(s=0;s<=n; s++)
        printf("%f",array[s]);

    return 0;
}