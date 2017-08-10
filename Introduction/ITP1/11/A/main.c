#include <stdio.h>
#include <malloc.h>
typedef struct {
    int N;
    int E;
    int W;
    int S;
    int D;
    int Z;
} Dice;

void Move(char dir,Dice *d){
    int tmp;
    switch(dir){
        case 'S':
            tmp = d->D;
            d->D = d->N;
            d->N = d->Z;
            d->Z = d->S;
            d->S = tmp;
            break;
        case 'E':
            tmp = d->D;
            d->D = d->W;
            d->W = d->Z;
            d->Z = d->E;
            d->E = tmp;
            break;
        case 'N':
            tmp = d->D;
            d->D = d->S;
            d->S = d->Z;
            d->Z = d->N;
            d->N = tmp;
            break;
        case 'W':
            tmp = d->D;
            d->D = d->E;
            d->E = d->Z;
            d->Z = d->W;
            d->W = tmp;
            break;
    }
}

int main(void){
    Dice *a = (Dice *) malloc(sizeof(Dice));
    char ch;
    scanf("%d %d %d %d %d %d\n",&a->D,&a->S,&a->E,&a->W,&a->N,&a->Z);
    while(scanf("%c",&ch) != EOF){
        Move(ch,a);
    }
    printf("%d\n",a->D);
    return 0;
}