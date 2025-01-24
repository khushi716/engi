/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <stdio.h>
#include<string.h>
unsigned int set(unsigned int x, int p, int n){
  int nbits = x&(~(~0<<n));
  int shiftbits = nbits<<(p-n);
  int clear = ~(~(~0<<n)<<(p-n));
   x = x & clear;
   return x | (~shiftbits);
}

int main()
{
   int pp,nn;
  unsigned int xx=240;
 
   pp = 3;
   nn = 5;
   set(xx,pp,nn);
   printf("%u",set(xx,pp,nn));
}