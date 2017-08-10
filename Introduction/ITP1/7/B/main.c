#include <stdio.h>

int main(void){
    int n,x,i,j,k,cnt;
    scanf("%d %d",&n,&x);
    while(n || x){
        cnt = 0;
        for(i=0;i<=n;i++){
            for(j=i+1;j<=n;j++){
                for(k=j+1;k<=n;k++){
                    if(i + j + k == x){
                        cnt++;
                    }    
                }
            }
        }
        printf("%d\n",cnt);
        scanf("%d %d",&n,&x);
    }
    return 0;
}