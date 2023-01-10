#include <stdio.h>  
  
int main() {  
    int n=0;    
    int bin[8];    
    scanf("%d",&n) ;    
    if (n<0)    {    
        n+=256; 
    }    
    for (int i = 7; i >= 0; i--){    
        bin[i]=n%2;    
        n/=2;    
    }    
    for (int i = 0; i < 8; i++)    
    {    
        printf("%d",bin[i]) ;    
    }    
    printf("\n") ;    
    return 0;  
}  