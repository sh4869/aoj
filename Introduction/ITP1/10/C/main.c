#include <stdio.h>
#include <math.h>

int main(void){
    int n,i;
    double sum,m;
    double a;
    int data[1000];
    scanf("%d",&n);
    while(n){
        a = 0;
        sum = 0;
        for(i=0;i<n;i++){
            scanf("%d",&data[i]);
        }
        for(i = 0;i<n;i++){
            sum += data[i];
        }
        m = sum / n;
        for(i = 0;i<n;i++){
            a += (data[i] - m) * (data[i] - m);
        }
        a /= n;
        printf("%f\n",sqrt(a));
        scanf("%d",&n);
    }
    return 0;
}