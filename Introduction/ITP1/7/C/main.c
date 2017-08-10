#include <stdio.h>

int main(void){
    int r,c,i,j;
    scanf("%d %d",&r,&c);
    int data[r][c];
    int ans[r+1][c+1];
    for(i = 0;i<r+1;i++){
        for(j = 0;j<c+1;j++){
            ans[i][j] = 0;
        }
    }
    for(i = 0;i<r;i++){
        for(j = 0;j<c;j++){
            scanf("%d",&data[i][j]);
            ans[i][j] = data[i][j];
        }
    }
    for(i = 0;i<r;i++){
        for(j = 0;j<c;j++){
            ans[i][c] += data[i][j];
        }
    }
    for(j=0;j<c+1;j++){
        for(i = 0;i<r;i++){
            ans[r][j] += ans[i][j];
        }
    }
    for(i=0;i<r+1;i++){
        for(j=0;j<c+1;j++){
            if(j != 0)printf(" ");
            printf("%d",ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}