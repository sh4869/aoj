#include <stdio.h>

int main(void){
    int x,i = 1;
    scanf("%d",&x);
    while(x){
        printf("Case %d: %d\n",i,x);
        i++;
        scanf("%d",&x);
    }
    return 0;
}