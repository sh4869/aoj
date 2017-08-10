#include <stdio.h>

int main(void){
    char ch;
    int start = 0,sum;
    scanf("%c",&ch);
    while(ch != '0' || start != 0){
        if(ch == '\n'){
            printf("%d\n",sum);
            start = 0;
            sum = 0;
        } else {
            start = 1;
            sum += ch - '0';
        }
        scanf("%c",&ch);
    }
    return 0;
}