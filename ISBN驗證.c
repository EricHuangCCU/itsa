#include<stdio.h>    
#include<math.h>  
#include<stdlib.h>  
  
int main() {    
  
    char c[2] ;  
    int a[10] ;  
    char s[2] = {'X','\0'} ;  
  
    for(int i=0 ; i<10 ; i++){  
        scanf("%s",&c);  
        if(c[0] == s[0]){  
            a[i] = 10 ;  
        }  
        else a[i] = atoi(c) ;  
  
    }  
  
    int first[10] ;  
    int second[10] ;  
  
    for(int i=0 ; i<10 ; i++){  
        first[i] = 0 ;  
        second[i] = 0 ;  
    }  
  
    for(int i=0 ; i<10 ; i++){  
        first[i] += a[i] ;  
        first[i+1] = first[i] ;  
    }  
  
    for(int i=0 ; i<10 ; i++){  
        second[i] += first[i] ;  
        second[i+1] = second[i] ;  
    }  
  
    if(second[9] % 11 == 0){  
        printf("YES\n");  
    }  
    else{  
        printf("NO\n") ;  
    }  
  
    return 0;    
} 