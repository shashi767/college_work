#include<stdio.h>
int main(){
    int x;
    int y;
    int z;
    printf("ENTER THE FIRST ANGLE:"); 
    scanf("%d",&x);
    printf("ENTER THE SECOND ANGLE:");
    scanf("%d",&y);
    printf("ENTER THE THIRED ANGLE:");
    scanf("%d",&z);
    if(x>90 && y>90 || x>90 && z>90 || y>90 && z>90 || x==0 || y==0 || z==0){
        printf("ANGLES ARE INVALID");
    }
    else if(x+y+z==180){
        printf("THE TRIANGLE IS VALID");
    }
    else{
        printf("THE TRIANGLE IS INVALID");
    }
    return 0;

}