#include <stdio.h>  
  
void t(int a,int b) {  
    while( a > 0 && b > 0 ) {  
  
    if( a > b )  
        a = a % b;  
    else  
        b = b % a;  
}  
    if( a == 0 )  
        printf("%d\n",b);  
    else  
        printf("%d\n",a);  
}  
int main(void) {  
    int a,b;  
  
    scanf("%d %d",&a,&b);  
    t(a,b);  
    return 0;  
}  
