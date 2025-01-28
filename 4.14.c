/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define swap(t,a,b) {t z;z=a;a=b;b=z;}
int main()
{
   int i = 3;
   int j = 4;
   printf("%d %d\n",i,j);
   swap(int,i,j);
   printf("%d %d",i,j);
    return 0;
}




































































