#include<stdio.h>
int main() {
  int a,b,reminder;
  printf("enter a number:");
  scanf("%d",&a);
  printf("enter a divisor");
  scanf("%d",&b);
  reminder=a-b*(a/b);
  printf("remainder is %d",reminder);
  return 0;
}