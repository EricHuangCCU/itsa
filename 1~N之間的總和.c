#include<stdio.h>  
#include<math.h>
#include<stdlib.h>


int main() {  

    int n ;

    while(scanf("%d",&n) != EOF){
        int count = 0 ;

        for(int i=0 ; i<=n ; i++){
            count += i ;
        }


        for(int i=1 ; i<n ; i++){
            printf("%d + ",i) ;
        }
        printf("%d = %d\n",n , count) ;
    
    }

    
   
    return 0;  
}