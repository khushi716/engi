#include<stdio.h>
#define upper 0
#define lower 300
#define step 20

int main(){
    float fehr,cel;
    cel = lower;
    while(cel>=upper){
        fehr = (9.0/5.0) * cel +32.0;
        printf("%f %f \n",cel,fehr);
        cel = cel - step;
    }
    
}