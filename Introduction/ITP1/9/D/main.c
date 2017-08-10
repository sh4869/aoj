#include <stdio.h>
#include <string.h>

int main(void){
    char str[1000];
    char tmp[1000];
    char order[10];
    char print[] = "print";
    char reverse[] = "reverse";
    char replace[] = "replace";
    int q,a,b,i,j,k;
    scanf("%s",str);
    scanf("%d",&q);
    for(i=0;i<q;i++){
        scanf("%s",order);
        if(!strcmp(order,print)){
            scanf("%d %d",&a,&b);
            for(j=a;j<=b;j++){
                printf("%c",str[j]);
            }
            printf("\n");          
        } else if(!strcmp(order,reverse)){
            scanf("%d %d",&a,&b);
            strcpy(tmp,str);
            for(j = a;j <= b;j++){
                str[j] = tmp[b - j + a];
            }
        } else if(!strcmp(order,replace)){
            scanf("%d %d",&a,&b);
            scanf("%s",tmp);
            k = 0;
            for(j = a;j<=b;j++){
                str[j] = tmp[k];
                k++;
            }
        }
    }
    return 0;
}