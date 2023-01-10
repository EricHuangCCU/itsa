#include<stdio.h>    
#include<math.h>  
#include<stdlib.h>  
  
int main() {    
  
    int a,b ;  
  
    while(scanf("%d %d",&a,&b) != EOF){  
        int ans ;  
  
        if(a>b){  
            for(int i=1 ; i<=b ; i++){  
                if(a%i == 0 && b%i ==0){  
                    ans = i ;  
                }  
            }  
        }  
        if(a<=b){  
            for(int i=1 ; i<=a ; i++){  
                if(a%i == 0 && b%i ==0){  
                    ans = i ;  
                }  
            }  
        }  
      
        printf("%d\n",ans) ;  
  
    }  
  
      
     
    return 0;    
}