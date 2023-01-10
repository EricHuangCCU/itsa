#include<stdio.h>  
  
int main(){  
  
    int N , a1 , a2 , a3 ;  
    scanf("%d,%d,%d,%d",&N , &a1 , &a2 , &a3) ;  
  
    if(N - a1*15 - a2*20 - a3*30 < 0){  
        printf("0\n") ;  
    }  
    else{  
        N -= (a1*15 + a2*20 + a3*30) ;  
        int big=0 , med=0 , small=0 ;  
  
        big = N/50 ;  
        med = N%50/5 ;  
        small = N%50%5 ;  
  
        printf("%d,%d,%d\n",small,med,big) ;  
    }  
  
    return 0 ;  
} 