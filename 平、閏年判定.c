#include<stdio.h>    
  
  
int main() {    
  
    int year;  
  
    while(scanf("%d",&year) != EOF){  
        int flag = 0 ;  
  
        if(year%4 == 0){  
            if(year%100 == 0){  
                if(year%400 == 0){  
                    flag = 1 ;  
                }  
            }  
              
        }  
          
        if(flag) printf("Bissextile Year\n") ;  
        else printf("Common Year\n") ;  
    }  
    return 0;    
}  