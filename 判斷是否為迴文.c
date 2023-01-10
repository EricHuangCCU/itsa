#include<stdio.h>    
#include<math.h>  
#include<stdlib.h>  
  
int main() {    
  
    char s[10000] ;  
    char c[10000];  
  
    while(scanf("%s",s) != EOF){  
  
        int i=0 ;  
        while(s[i] != '\0'){  
            i++ ;  
        }  
  
        int flag = 0 ;  
  
        for(int j=0 ; j<i/2 ; j++){  
        if(s[j] != s[i-j-1]){  
            flag = 1 ;  
            break ;  
        }  
        }  
  
        if(flag) printf("NO\n") ;  
        else printf("YES\n") ;  
    }  
  
    return 0;    
}  