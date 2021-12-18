#include<stdio.h>
int main() {
    int a,b,c,d,e;
    float Total,average,percentage_of_marks;
    printf("enter your marks of 5 subjects");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    Total=a+b+c+d+e;
    average=(Total)/5;
    percentage_of_marks=(Total/500)*100;
    printf("your total marks are %f \n your average is  %f \n your percentage_of_marks is %f \n",Total,average,percentage_of_marks);
    return 0;
    
    
}
