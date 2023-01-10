#include<stdio.h>    
#include<math.h>  
#include<stdlib.h>  
  
  
int main() {    
  
    int a , b ,c;  
    while(scanf("%d %d %d",&a,&b,&c) != EOF){  
        if(a+b >c && a+c>b && b+c > a){  
            printf("fit\n");  
        }  
        else{  
            printf("unfit\n") ;  
        }  
    }  
      
  
      
     
    return 0;    
}  