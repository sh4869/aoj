#include <stdio.h>
#include <malloc.h>
#define ALLCHECK(a,b) if(allcheck(a,b)) {RIGHT}
#define CHECK(a,b) if(a != b) { WRONG }
#define WRONG printf("No\n");return;
#define RIGHT printf("Yes\n"); return;

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
        case 'L':
            tmp = d->S;
            d->S = d->E;
            d->E = d->N;
            d->N = d->W;
            d->W = tmp;
            break;
        case 'R':
            tmp = d->S;
            d->S = d->W;
            d->W = d->N;
            d->N = d->E;
            d->E = tmp;
            break;
    }
}

int allcheck(Dice *a,Dice *b){
    if(a->D == b->D && a->Z == b->Z && a->S == b->S && a->E == b->E && a->N == b->N && a->W == b->W){
        return 1;
    }
    return 0;
}

void check(Dice *a,Dice *b){
    
    ALLCHECK(a,b)
    if(b->D == a->D){
        if(b->S == a->E){
            Move('R',b);
            ALLCHECK(a,b)
        }
        if(b->S == a->N){
            Move('R',b);
            Move('R',b);
            ALLCHECK(a,b)
        }
        if(b->S == a->W){
            Move('L',b);
            ALLCHECK(a,b)
        }
    }
    if(b->D == a->S){
        if(b->S == a->D){
            Move('R',b);
            Move('R',b);
            ALLCHECK(a,b)
        }
        if(b->E == a->D){
            Move('R',b);
            ALLCHECK(a,b)
        }
        if(b->N == a->D){
            ALLCHECK(a,b)
        }
        if(b->W == a->D){
            Move('L',b);
            ALLCHECK(a,b)
        }
        Move('S',b);
        ALLCHECK(a,b)
    }
    if(b->D == a->E){
        if(b->S == a->D){
            Move('L',b);
            ALLCHECK(a,b)
        } else if(b->E == a->D){
            Move('R',b);
            Move('R',b);
            ALLCHECK(a,b)
        } else if(b->N == a->D){
            Move('R',b);
            ALLCHECK(a,b)
        } else if(b->W == a->D){

        }
        Move('E',b);
        ALLCHECK(a,b)
    }
    if(b->D == a->W){
        if(b->S == a->D){
            Move('R',b);
            ALLCHECK(a,b)
        } else if(b->E == a->D){
            ALLCHECK(a,b)
        } else if(b->N == a->D){
            Move('L',b);
            
            ALLCHECK(a,b)
        } else if(b->W == a->D){
            Move('R',b);
            Move('R',b);
            ALLCHECK(a,b)
            
        }
        Move('W',b);
        ALLCHECK(a,b)
    }
    if(b->D == a->N){
        if(b->S == a->D){
        } else if(b->E == a->D){
            Move('L',b);
            ALLCHECK(a,b)
        } else if(b->N == a->D){
            Move('R',b);
            Move('R',b);
            ALLCHECK(a,b)
        } else if(b->W == a->D){
            Move('R',b);
            ALLCHECK(a,b)
        }
        Move('N',b);
        
        ALLCHECK(a,b)
    }
    if(b->D == a->Z){
        Move('S',b);
        Move('S',b);
        if(b->S == a->E){
            Move('R',b);
            ALLCHECK(a,b)
        } else if(b->S == a->N){
            Move('R',b);
            Move('R',b);
            ALLCHECK(a,b)
        } else if(b->S == a->W){
            Move('L',b);
            ALLCHECK(a,b)
        }
        ALLCHECK(a,b)
    }
    WRONG
}
int main(void){
    Dice *a = (Dice *) malloc(sizeof(Dice));
    Dice *b = (Dice *) malloc(sizeof(Dice));
    scanf("%d %d %d %d %d %d\n",&a->D,&a->S,&a->E,&a->W,&a->N,&a->Z);
    scanf("%d %d %d %d %d %d\n",&b->D,&b->S,&b->E,&b->W,&b->N,&b->Z);
    check(a,b);
    return 0;
}