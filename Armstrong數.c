#include<stdio.h>  
#include<math.h>
#include<stdlib.h>


int main() {  

    int n ;
    int m ;

    while(scanf("%d",&m) != EOF){
        n = m ;
        int a=0,b=0,c=0 ;
        a = n/100 ;
        n%=100 ;
        b = n/10 ;
        n %=10 ;
        c = n ;

        if(a*a*a + b*b*b + c*c*c == m){
            printf("Yes\n");
        }
        else{
            printf("No\n") ;
        }
    }

    

    
   
    return 0;  
}