#include <stdio.h>
#include <string.h>

int main(void){
    char taro[100];
    char hanako[100];
    int n,i,t=0,h=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",&taro);
        scanf("%s",&hanako);
        if(strcmp(taro,hanako) == 0){
            t += 1;
            h += 1;
        } else if(strcmp(taro,hanako) > 0){
            t += 3;
        } else {
            h += 3;
        }
    }
    printf("%d %d\n",t,h);
    return 0;
}