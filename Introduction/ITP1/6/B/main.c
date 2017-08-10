#include <stdio.h>

int main(void){
    int strs[4] = {'S','H','C','D'};
    int data[4][13] = {0};
    int n,i,j,x;
    char c;
    scanf("%d",&n);
    for(i = 0;i<=n;i++){
        scanf("%c %d\n",&c,&x);
        switch(c){
            case 'S':
                data[0][x-1] = 1;
                break;
            case 'H':
                data[1][x-1] = 1;
                break;
            case 'C':
                data[2][x-1] = 1;
                break;
            case 'D':
                data[3][x-1] = 1;
                break;
        }
    }
    for(i = 0;i<4;i++){
        for(j = 0;j<13;j++){
            if(data[i][j] == 0){
                printf("%c %d\n",strs[i],j+1);
            }
        }
    }
    return 0;
}