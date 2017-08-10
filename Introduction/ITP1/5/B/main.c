#include <stdio.h>

int main(void){
    int H,W,i,j;
    scanf("%d %d",&H,&W);
    while(H || W){
        for(i = 0;i<H;i++){
            if(i == 0 || i == H - 1){
                for(j = 0;j < W;j++){
                    printf("#");
                }
                printf("\n");
            } else {
                printf("#");
                for(j = 1;j < W -1;j++){
                    printf(".");
                }
                printf("#");
                printf("\n");
            }
        }
        printf("\n");
        scanf("%d %d",&H,&W);
    }
    return 0;
}