#include<stdio.h>
int main(){
    int x1,y1,x2,y2,x3,y3;
    printf("ENTER THE VALUE OF x1:");
    scanf("%d",&x1);
    printf("ENTER THE VALUE OF y1:");
    scanf("%d",&y1);
    printf("ENTER THE VALUE OF x2:");
    scanf("%d",&x2);
    printf("ENTER THE VALUE OF y2:");
    scanf("%d",&y2);
    printf("ENTER THE VALUE OF x3:");
    scanf("%d",&x3);
    printf("ENTER THE VALUE OF y3:");
    scanf("%d",&y3);
    if((x1*(y2-y3))-(y1*(x2-x3))+(x2*y3-x3*y2)==0){
        printf("POINTS ARE ON A LINE");
    }
    else{
        printf("POINTS ARE NOT ON A LINE");
    }
    return 0;
    
}