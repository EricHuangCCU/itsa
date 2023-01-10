#include<stdio.h>    
#include<math.h>  
#include<stdlib.h>  
  
int main() {    
  
    int i ;  
  
    while(scanf("%d",&i) != EOF){  
        if(i>31) printf("Value of more than 31\n") ;  
        else{  
            long j = 1 ;  
            for(int k=1 ; k<=i ; k++){  
                j *= 2 ;  
            }  
            printf("%ld\n",j) ;  
        }  
    }  
  
    return 0;    
} 