#include <stdio.h>

int main(void){
    int a,b;
    char c;
    scanf("%d %c %d",&a,&c,&b);
    while(c != '?'){
        switch(c){
            case '+':
                printf("%d\n",a+b);
                break;
            case '-':
                printf("%d\n",a-b);
                break;
            case '*':
                printf("%d\n",a*b);
                break;
            case '/':
                printf("%d\n",a/b);
                break;
        }
         scanf("%d %c %d",&a,&c,&b);
    }
    return 0;
}