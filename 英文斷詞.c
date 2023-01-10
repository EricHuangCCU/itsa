#include<stdio.h>    
#include<string.h>    
#include<ctype.h>    
int main() {    
    char enter[10000];    
    fgets(enter, 9999, stdin);    
    int len = strlen(enter);    
    for (int i = 0 ; i < len; i++) {    
        enter[i] = tolower(enter[i]);    
    }    
    char ans[1000][1000];    
    int nowAns = 0;    
    char *pch = strtok(enter, " \r\n");  // 爛坑！！！  
    while(pch != NULL) {    
        int judge = 1;    
        for (int i = 0; i < nowAns; i++) {    
            if (strcmp(ans[i], pch) == 0) {    
                judge = 0;    
                break;    
            }    
        }    
        if (judge) {    
            strcpy(ans[nowAns], pch);    
            nowAns++;    
        }    
        pch = strtok(NULL, " \r\n");  // 爛坑！！！  
    }    
    for (int i = 0; i < nowAns; i++) {    
        if(i)    
            printf(" ");    
        printf("%s", ans[i]);   
    }    
    printf("\n");    
    return 0;    
}  