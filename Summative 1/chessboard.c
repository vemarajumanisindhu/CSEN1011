#include<stdio.h>
int main(){
    struct position {
        int x,y;
        int color;
    };
    int i;
    struct position p[2];
    for(i=0;i<2;i++)
    {
        scanf("%d%d",&p[i].x,&p[i].y);
        
    }
    for(i=0;i<2;i++)
    {
        if(p[i].x%2==0){
            
        
        if(p[i].y%2==0)
        p[i].color=1;
        else
        p[i].color=0;
    }
    else
    {
        if(p[i].y%2==0){
            p[i].color=0;
        }
        else
            p[i].color=1;
        
    }
}
    if(p[0].color==p[1].color)
    printf("True");
    else
        printf("False");
    
    return 0;
}
    
