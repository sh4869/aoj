#include <stdio.h>

int main(void){
    int n,i,j;
    scanf("%d",&n);
    for(i = 1;i<=n;i++){
        if(i % 3 == 0){
            printf(" %d",i);
        } else {
            for(j = i;j>0;j /= 10){
                if(j % 10 == 3){
                    printf(" %d",i);
                    break;
                }
            }
        }
    }
    printf("\n");
    return 0;
}