#include<stdio.h>
int main(){
  int i,n;
  int x1=0,x2=1;
  int nextterm=x1+x2;
  printf("enter the no of terms:");
  scanf("%d",&n);
  printf("fibanocci series:%d%d",x1,x2);
  for(i=3,i<=n;++i;) {
    printf("%d",nextterm);
    x1=x2;
    x2=nextterm;
    nextterm=x1+x2;
  }
  return 0;
}
