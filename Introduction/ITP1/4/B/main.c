#include <stdio.h>
#define PI 3.141592653589
int main(void){
    double r;
    scanf("%lf",&r);
    printf("%f %f",r * r * PI, r * 2 * PI);
    return 0;
}