#include<stdio.h>
int main() {
int n1,remainder,n,result,num;
printf("enter a three digit number");
scanf("%d",&n);
n1=n;
while(n1!=0) {
  remainder=n1%10;
  result+=remainder*remainder*remainder;
  n1/=10;
}
if(result==n)
printf("%d is am armstrong number",n);
else 
printf("%d is not an armstrong number",n);
return 0;
}






