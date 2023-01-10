#include<stdio.h>    
#include<stdlib.h>  
  
int main() {    
  
    int degree ;  
  
    scanf("%d",&degree) ;  
  
    if(degree <=120){  
        printf("Summer months:%.2f\n",2.1 * degree) ;  
    }  
    else if(degree <= 330){  
        printf("Summer months:%.2f\n",252+3.02 * (degree-120)) ;  
    }  
    else if(degree <= 500){  
        printf("Summer months:%.2f\n",886.2+4.39*(degree-330)) ;  
    }  
    else if(degree <= 700){  
        printf("Summer months:%.2f\n",1632.5+4.97*(degree-500)) ;  
    }  
    else if(degree >700){  
        printf("Summer months:%.2f\n",2626.5+5.63*(degree-700));  
    }  
      
    if(degree <=120){  
        printf("Non-Summer months:%.2f\n",2.1 * degree) ;  
    }  
    else if(degree <= 330){  
        printf("Non-Summer months:%.2f\n",252+2.68 * (degree-120)) ;  
    }  
    else if(degree <= 500){  
        printf("Non-Summer months:%.2f\n",814.8+3.61*(degree-330)) ;  
    }  
    else if(degree <= 700){  
        printf("Non-Summer months:%.2f\n",1428.5+4.01*(degree-500)) ;  
    }  
    else if(degree >700){  
        printf("Non-Summer months:%.2f\n",2230.5+4.5*(degree-700));  
    }  
    return 0;    
} 