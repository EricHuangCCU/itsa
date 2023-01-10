int main(void) {  
    int n=0;  
    int ans=0;  
    scanf("%d",&n);  
    for (int i = 1; i <= n; i++)  
    {  
        if(i%3==0){ans+=i;}  
    }  
    printf("%d\n",ans) ;  
    return 0;  
}  