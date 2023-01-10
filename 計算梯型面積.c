#include<stdio.h>    
#include<math.h>  
#include<stdlib.h>  
  
  
int main() {    
  
    double a,b,c ;  
    while(scanf("%lf %lf %lf",&a,&b,&c) != EOF){  
        printf("Trapezoid area:%.1lf\n",(a+b)*c/2) ;  
    }  
      
     
    return 0;    
}  