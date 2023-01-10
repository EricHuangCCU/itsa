#include<stdio.h>    
  
  
int main() {    
  
    int h ;  
    int sex ;  
    float w;  
  
    while(scanf("%d %d",&h,&sex)!= EOF){  
        if(sex == 1){  
            w = (h-80)*0.7 ;  
            printf("%.1f\n",w) ;  
        }  
        else if(sex == 2){  
            w = (h-70)*0.6 ;  
            printf("%.1f\n",w) ;  
        }  
    }  
  
    return 0;    
}  