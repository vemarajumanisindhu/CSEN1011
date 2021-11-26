#include<stdio.h>
int main() {
  int basic,da,pf,income_tax,others,hra,ta;
  printf("enter yor basic salary: \n your da: \n your hra: \n");
  scanf("%d,%d,%d",&basic,&da,&hra);
  da=(basic*12)/100;
  hra=(basic*10)/100;
  income_tax=(basic*5)/100;
  printf("your da : %d\n hra : %d\n income tax:%d ");
  return 0;
}