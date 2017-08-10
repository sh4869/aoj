#include <stdio.h> 

int main(void){
    int n,m,l,i,j,k;
    scanf("%d %d %d",&n,&m,&l);
    int matA[n][m];
    int matB[m][l];
    long long matC[n][l];
    for(i=0;i<n;i++){
        for(j=0;j<l;j++){
            matC[i][j] = 0;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&matA[i][j]);
        }
    }
    
    for(i=0;i<m;i++){
        for(j=0;j<l;j++){
            scanf("%d",&matB[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<l;j++){
            for(k=0;k<m;k++){
                matC[i][j] += matA[i][k] * matB[k][j];
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<l;j++){
            if(j != 0) printf(" ");
            printf("%lld",matC[i][j]);
        }
        printf("\n");
    }
    return 0;
}