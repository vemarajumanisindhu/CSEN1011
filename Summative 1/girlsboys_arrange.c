#include<stdio.h>
int factorial(int n);
int main(){
  int fact1,fact2,fact3,ans,g,b;
  scanf("%d%d",&g,&b);
  if(g>b||g+b>10){
    printf("Invalid");
    return 0;
  }
  fact1=factorial(b);
  fact2=factorial(b+1);
  fact3=factorial(b+1-g);
  ans=fact1*(fact2/fact3);
  printf("%d",ans);
  return 0;
  }
int factorial(int n){
  int ans,i;
  for(i=n-1;i>=1;i--)
    {
      n=n*i;
    }

return n;
  
}
