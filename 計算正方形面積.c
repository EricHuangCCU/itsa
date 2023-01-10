#include<stdio.h>  
#include<math.h>
#include<stdlib.h>


int main() {  

    double a,b ;
    while(scanf("%lf",&a) != EOF){
        printf("%.1lf\n",(a*a*100+0.5)/100) ;
    }
    
   
    return 0;  
}