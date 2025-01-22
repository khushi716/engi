#include<stdio.h>
int main(){
    int upper,lower,step;
    float cel,fehr;
    
    lower=300;
    step = 20;
    upper =0;
    cel = lower;
    while(cel>=upper){
        fehr = (9.0/5.0) * cel +32.0;
        printf("%f %f \n",cel,fehr);
        cel = cel - step;
    }
}