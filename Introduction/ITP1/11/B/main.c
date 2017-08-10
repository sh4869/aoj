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

int search(int d,int s,Dice *a){
    if(d == a->D){
        if(s == a->S)
            return a->E;
        if(s == a->E)
            return a->N;
        if(s == a->N)
            return a->W;
        if(s == a->W)
            return a->S;
    } else if(d == a->S){
        if(s == a->W)
            return a->Z;
        if(s == a->Z)
            return a->E;
        if(s == a->E)
            return a->D;
        if(s == a->D)
            return a->W;
    } else if(d == a->E){
        if(s == a->S)
            return a->Z;
        if(s == a->Z)
            return a->N;
        if(s == a->N)
            return a->D;
        if(s == a->D)
            return a->S;       
    } else if(d == a->W){
        if(s == a->S)
            return a->D;
        if(s == a->D)
            return a->N;
        if(s == a->N)
            return a->Z;
        if(s == a->Z)
            return a->S;
    } else if(d == a->N){
        if(s == a->W)
            return a->D;
        if(s == a->D)
            return a->E;
        if(s == a->E)
            return a->Z;
        if(s == a->Z)
            return a->W;
    } else if(d == a->Z){
        if(s == a->S)
            return a->W;
        if(s == a->W)
            return a->N;
        if(s == a->N)
            return a->E;
        if(s == a->E)
            return a->S;
    }
}

int main(void){
    Dice *a = (Dice *) malloc(sizeof(Dice));
    int n,s,d;
    int i;
    scanf("%d %d %d %d %d %d\n",&a->D,&a->S,&a->E,&a->W,&a->N,&a->Z);
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&d,&s);
        printf("%d\n",search(d,s,a));    
    }
    return 0;
}