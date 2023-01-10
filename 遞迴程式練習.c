#include<stdio.h>  
  
int f(int k){  
    if(k == 0 || k== 1) return k+1 ;  
    else if(k > 1) return f(k-1) + f(k/2) ;  
  
}  
  
int main(){  
  
    int k ;  
    while(scanf("%d",&k) != EOF){  
        int ans = f(k) ;  
  
        printf("%d\n",ans) ;  
    }  
     
  
    return 0 ;  
} 