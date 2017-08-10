#include <stdio.h>
#include <math.h>

int main(void){
    int n,i;
    int x[100],y[100];
    double p1,p2,p3,pinf;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++){
        scanf("%d",&y[i]);
    }
    p1 = p2 = p3 = pinf = 0;
    for(i = 0;i<n;i++){
        p1 += fabs(x[i] - y[i]);
    }
    
    printf("%f\n",p1);
    for(i=0;i<n;i++){
        p2 += fabs(x[i] - y[i]) * fabs(x[i] - y[i]);
    }
    p2 = sqrt(p2);
    
    printf("%f\n",p2);
    for(i = 0;i<n;i++){
        p3 += fabs(x[i] - y[i]) * fabs(x[i] - y[i]) * fabs(x[i] - y[i]);
    }
    p3 = pow(p3,1.0 / 3.0);
    
    printf("%f\n",p3);
    pinf = fabs(x[0] - y[0]);
    for(i = 1;i<n;i++){
        if(fabs(x[i] - y[i]) > pinf){
            pinf = fabs(x[i] - y[i]);
        }
    }
    printf("%f\n",pinf);
    return 0;

}