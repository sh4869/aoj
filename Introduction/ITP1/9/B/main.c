#include <stdio.h>
#include <string.h>

int main(void){
    char set[200];
    char copy[201];
    char tmp[200];
    char end[100] = "-";
    int m,h,i,j,k,len = 0;
    scanf("%s\n",set);
    while(strcmp(set,end) != 0){
        for(i=0;set[i] != '\0' && i < 200;i++) len++;
        scanf("%d",&m);
        for(i = 0; i<m;i++){
            strcpy(copy,set);
            scanf("%d",&h);
            for(j = 0;j < h;j++){
                tmp[j] = set[j];
            }
            for(j = 0;j < len - h;j++){
                set[j] = copy[j+h];
            }
            k = 0;
            for(j=len - h;j<len;j++){
                set[j] = tmp[k];
                k++;
            }
        }
        printf("%s\n",set);
        scanf("%s\n",set);
        len = 0;
    }
}