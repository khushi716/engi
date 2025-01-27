#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define MAXOP 100
#define NUMBER '0'

int getop(char []);
void push(double);
double pop(void);



int main(void)
{
    int type;
    double op2;
    double op3;
    double op4;
    char s[MAXOP];

    while((type = getop(s)) != EOF)
    {
        switch(type)
        {
                case NUMBER:
                        push(atof(s));
                        break;
                case '+':
                        push(pop()+pop());
                        break;
                case '*':
                        push(pop()*pop());
                        break;
                case '-':
                        op2 = pop();
                        push(pop()-op2);
                        break;
                case '/':
                        op2 = pop();
                        if(op2 != 0.0)
                            push(pop()/op2);
                        else
                            printf("error:zero divisor");
                        break;
                case '%':
                        op2 = pop();
                        if(op2 != 0.0)
                            push(fmod(pop(),op2));
                        else
                            printf("erro:zero divisor");
                        break;
                case '\n':
                        printf("\t%.8g\n",pop());
                        break;
                case 'd':
                      op2 = pop();
                      push(op2);
                      push(op2);
                      break;
                      
                      case 's':
                      op4= pop();
                      op3= pop();
                      push(op3);
                      push(op2);
                      break;
                      
                      case:'c':
                      sp = 0;
                      break;
                      
                default:
                        printf("error: unknown command %s\n",s);
                        break;

        }
    }
    return 0;
}


#define MAXVAL 100

int sp = 0;
double val[MAXVAL];

void push(double f)
{
    if(sp < MAXVAL)
        val[sp++]=f;
    else
        printf("error:stack full, cant push %g\n",f);
}


double pop(void)
{
    if(sp>0)
        return val[--sp];
    else
    {
        printf("error: stack empty");
        return 0.0;
    }
}

#include<ctype.h>

int getch(void);
void ungetch(int);

int getop(char s[])
{
    int i,c;

    while((s[0] = c = getch()) == ' ' || c =='\t')
        ;
    s[1] = '\0';
    
    i = 0;
    if(!isdigit(c) && c!='.' && c!='-')
        return c;

    if(c=='-')
        if(isdigit(c=getch()) || c == '.')
            s[++i]=c;
        else
        {
            if(c!=EOF)
                ungetch(c);
            return '-';
        }
    
    if(isdigit(c))
        while(isdigit(s[++i] =c =getch()))
            ;

    if(c=='.')
        while(isdigit(s[++i] = c=getch()))
            ;
    
    s[i] = '\0';
    if(c!=EOF)
        ungetch(c);
    return NUMBER;
}

#define BUFSIZE 100

char buf[BUFSIZE];
int bufp = 0;

int getch(void)
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
    if(bufp >= BUFSIZE)
        printf("ungetc too many characters");
    else
        buf[bufp++] = c;
}