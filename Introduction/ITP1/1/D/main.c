#include <stdio.h>

int main(void){
  int time;
  int h,m,s;
  scanf("%d",&time);
  h = (int)(time / 3600);
  m = (int)((time - (h * 3600))/ 60);
  s = time - (3600) * h - 60 * m;
  printf("%d:%d:%d\n",h,m,s);
  return 0;
}
