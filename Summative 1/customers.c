#include<stdbool.h>
#include<string.h>
#include<ctype.h>
#include<stdio.h>
struct customer{
    char name[15];
    int amount;
    char mobile_number[10];
};
int main(){
    int i,j;
    bool flag=true;
    struct customer c[2];
    for(i=0;i<2;i++)
    {
        scanf("%s %d %s",c[i].name,&c[i].amount,c[i].mobile_number);
    }
    for(i=0;i<2;i++)
    {
        if(strlen(c[i].mobile_number)!=10)
        {
            printf("Invalid number \n");
            flag=false;
        }
        if(c[i].amount<0)
        {
            printf("Invalid amount\n");
            flag=false;
        }
        for(j=0;j<strlen(c[i].mobile_number);j++)
        {
            if(!isdigit(c[i].mobile_number[j]))
            {
                printf("Invalid entry\n");
                flag=false;
            }
        }
        if(flag)
        {
            printf("%d",c[i].amount);
            
        }
        flag=true;
    }
    return 0;
}
