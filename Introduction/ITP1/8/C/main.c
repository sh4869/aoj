#include <stdio.h>
#include <ctype.h>

int main(void){
    int num[26] = {0};
    int i;
    char ch;
    int result = scanf("%c",&ch);
    while(result != EOF){
        ch = tolower(ch);
        if(ch - 'a' > -1 && ch - 'a' < 26){
            num[ch - 'a'] += 1;
        }
        result = scanf("%c",&ch);
    }
    for(i = 0;i<26;i++){
        printf("%c : %d\n",'a' + i,num[i]);
    }
    return 0;
}