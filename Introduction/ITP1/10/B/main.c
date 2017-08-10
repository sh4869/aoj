#include <stdio.h>
#include <math.h>
#define PI 3.14159265359

int main(void){
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    c = c * PI / 180;
    printf("%f\n",a * b  / 2 * sin(c));
    printf("%f\n",a + b + sqrt(a*a + b*b  - 2 * a * b * cos(c)));
    printf("%f\n",sin(c) * b);
    return 0;
}