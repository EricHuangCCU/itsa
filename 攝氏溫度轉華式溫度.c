#include<stdio.h>    
#include<math.h>  
#include<stdlib.h>  
  
int main() {    
  
    float i ;  
  
    while(scanf("%f",&i) != EOF){  
        float k = (i*9/5)+32 ;  
  
        printf("%.1f\n",k) ;  
    }  
  
    return 0;    
}