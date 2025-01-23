

#include <stdio.h>
void charange(char a){
    
    int eight;
    int powe=1;
     
     eight = sizeof(a)*8;
    
     for(int i = 0;i<eight;i++){
        powe = 2 *powe;
        
        
     }
     printf("range:%d to %d\n",-(powe/2),(powe/2));
}
void shortrange( short int a){
    
    int eight;
    int powe=1;
     
     eight = sizeof(a)*8;
    
     for(int i = 0;i<eight;i++){
        powe = 2 *powe;
        
        
     }
     printf("range:%d to %d\n",-(powe/2),(powe/2));
}

void intrange( short int a){
    
    int eight;
    int powe=1;
     
     eight = sizeof(a)*8;
    
     for(int i = 0;i<eight;i++){
        powe = 2 *powe;
        
        
     }
     printf("range:%d to %d",-(powe/2),(powe/2));
}



int main()
{
    char ch;
    ch = 'a';
    charange(ch);
    short int s;
    s = 0;
    shortrange(s);
    int sh ;
    sh =3;
    intrange(sh);
    
    
    return 0;
}