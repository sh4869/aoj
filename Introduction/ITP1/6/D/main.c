#include <stdio.h>

int main(void){
    int n,m,i,j;
    scanf("%d %d",&n,&m);
    int matrix[n][m];
    int vector[m];
    int ans[n];
    for(i = 0;i<n;i++){
      ans[i]  = 0;
    }
    for(i = 0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i = 0;i<m;i++){
        scanf("%d",&vector[i]);
    }
    for(i = 0;i<n;i++){
        for(j = 0;j<m;j++){
            ans[i] += matrix[i][j] * vector[j];
        }
        printf("%d\n",ans[i]);
    }
    return 0;
}