#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
    int i = 0,cnt = 0;
    char W[10];
    char T[1000];
    char end[100] = "END_OF_TEXT";
    scanf("%s\n",W);
    scanf("%s\n",T);
    while(strcmp(T,end) != 0){
        i = 0;
        while(tolower(T[i]) == W[i]){
            i++;
            if(T[i] == '\0' && (i == 10 || W[i] == '\0') ) {
                cnt++;
                break;
            }
        }
        scanf("%s",T);
    }
    printf("%d\n",cnt);
    return 0;
}