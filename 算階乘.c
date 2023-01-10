#include<stdio.h>    
#include<math.h>  
#include<stdlib.h>  
  
long frac(int a){  
    if(a==0) return 0 ;  
    else if(a == 1) return 1 ;  
    else{  
        return a*frac(a-1) ;  
    }  
}  
  
int main() {    
  
    long a ;  
    while(scanf("%ld",&a) != EOF){  
        printf("%ld\n",frac(a)) ;  
    }  
      
  
      
     
    return 0;    
} 