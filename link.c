#include<stdio.h>
int main(){
    int x;
    printf("inter the age:");
    scanf("%d",&x);
    if(x>=18){
        printf("you are eligible for vote");
    }
    else{
        printf("you are not eligible for vote");
    }
    return 0;
}


