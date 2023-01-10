int main(){  
  
    int n ;  
  
    scanf("%d",&n) ;  
    int flag = 0 ;  
    for(int i=2 ; i<n ; i++){  
        if(n%i == 0){  
            flag = 1 ;  
            break ;  
        }  
    }  
  
    if(flag) printf("NO\n") ;  
    else printf("YES\n") ;  
  
      
  
    return 0 ;  
}  