#include<stdio.h>    
#include<math.h>  
  
  
int main() {    
  
        int n;  
        scanf("%d",&n) ;  
  
        int A[n],B[n],C[n] ;  
  
        for(int i=0 ; i<n ; i++){  
            scanf("%d %d %d",&A[i],&B[i],&C[i]) ;  
        }  
  
        for(int i=0 ; i<n ; i++){  
            int a,b,c;  
            a=A[i];  
            b=B[i];  
            c=C[i];  
  
            int sum = a +b +c ;  
  
            if(a>=60 && b>=60 && c>=60){  
                printf("P\n") ;  
            }  
            else if(a<60 && b>=60 && c>=60 || b<60 && a>=60 && c>=60 || c<60 && b>=60 && a>=60){  
                if(sum>=220){  
                    printf("P\n") ;  
                }  
                else{  
                    printf("M\n");  
                }  
            }  
            else if(a<60 && b<=60 && c>=80 || a<60 && c<=60 && b>=80 || b<60 && c<=60 && a>=80){  
                printf("M\n") ;  
            }  
  
            else{  
                printf("F\n") ;  
            }  
        }  
  
  
  
  
    return 0;    
}