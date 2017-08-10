#include <stdio.h>

int main(void){
    int n,i,k,min,max;
    long long int sum = 0;
    scanf("%d",&n);
    for(i = 0;i<n;i++){
        scanf("%d",&k);
        sum += k;
        if(i == 0){
            min = k;
            max = k;
        } else {
            if(min > k){
                min = k;
            }
            if(max < k){
                max = k;
            }
        }
    }
    printf("%d %d %lld\n",min,max,sum);
    return 0;
}