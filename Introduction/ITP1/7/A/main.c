#include <stdio.h>

int main(void){
    int m,f,r;
    scanf("%d %d %d",&m,&f,&r);
    while(m  > -1 ||  f > -1 || r > -1){
        if(m < 0 || f < 0 || m + f < 30){
            printf("F\n");
        } else if(m + f < 50 && r < 50){
            printf("D\n");
        } else if(m + f < 65){
            printf("C\n");
        } else if(m + f < 80){
            printf("B\n");
        } else {
            printf("A\n");
        }
        scanf("%d %d %d",&m,&f,&r);
    }
    return 0;
}