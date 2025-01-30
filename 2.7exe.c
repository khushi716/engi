#include <stdio.h>
#include<string.h>
unsigned int set(unsigned int x, int p, int n,unsigned int y){
  int nbits = y&(~(~0<<n));
  int shiftbits = nbits<<(p-n+1);
  int clear = ~(~(~0<<n)<<(p-n+1));
  x = x & clear;
  return x | (~shiftbits);
}

int main()
{
  int pp,nn;
  unsigned int xx=0x2;
  unsigned int yy=0xD;
  pp = 2;
  nn = 2;
  set(xx,pp,nn,yy);
  printf("%u",set(xx,pp,nn,yy));
}
