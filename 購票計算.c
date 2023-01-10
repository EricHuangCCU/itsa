#include<stdio.h>    
#include<math.h>  
#include<stdlib.h>  
  
int main() {    
  
    int p ,a=0 ,b=0, c=0 ;  
  
    scanf("%d",&p) ;  
  
    a = p/10 ;  
    b = p%10/5 ;  
    c = p%10%5 ;  
  
    printf("NT10=%d\nNT5=%d\nNT1=%d\n",a,b,c) ;  
  
    return 0;    
}