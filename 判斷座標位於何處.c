#include<stdio.h>    
#include<math.h>  
#include<stdlib.h>  
  
  
int main() {    
  
    long a , b ;  
    while(scanf("%ld %ld",&a,&b) != EOF){  
        if(a==0 && b==0){  
            printf("Origin\n") ;  
        }  
        else if(a==0 && b!=0){  
            printf("y-axis\n") ;  
        }  
        else if(a!=0 && b==0){  
            printf("x-axis\n") ;  
        }  
        else if(a>0 && b>0){  
            printf("1st Quadrant\n") ;  
        }  
        else if(a<0 && b>0){  
            printf("2nd Quadrant\n") ;  
        }  
        else if(a<0 && b<0){  
            printf("3rd Quadrant\n") ;  
        }  
        else if(a>0 && b<0){  
            printf("4th Quadrant\n") ;  
        }  
    }  
      
  
      
     
    return 0;    
}