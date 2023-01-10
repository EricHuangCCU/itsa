#include<stdio.h>  
#include<math.h>
#include<stdlib.h>


int main() {  

    int a,b ;
    while(scanf("%d",&a) != EOF){
        for(int i=1 ; i<a ; i++){
            if(a%i == 0){
                printf("%d ",i); 
            }
        }printf("%d\n",a) ;
    }
    
   
    return 0;  
}