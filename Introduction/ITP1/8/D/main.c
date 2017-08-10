#include <stdio.h>

int main(void){
    char s[200];
    char p[100];
    int len,i = 0,j,k;
    scanf("%s\n",s);
    scanf("%s\n",p);
    while(s[i] != '\0') i++;
    len = i;
    for(i = len;i<len*2;i++){
        s[i] = s[i - len];
    }
    for(i = 0;i < len*2;i++){
        if(s[i] == p[0]){
            j = 0;
            k = i;
            while(s[k] == p[j]){
                j++;
                k++;
                if(p[j] == '\0'){
                    printf("Yes\n");
                    return 0;
                }
            }
        }
    }
    printf("No\n");
    return 0;
}