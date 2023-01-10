#include <stdio.h>    
#include<math.h>    
    
int main()    
{    
    float a,b ;    
    scanf("%f %f",&a,&b) ;    
    
    float c = pow(a,2) + pow(b,2)  ;  
        
    if(c <= 10000){    
        printf("inside\n") ;    
    }    
    else{    
        printf("outside\n") ;    
    }    
    return 0;    
} 