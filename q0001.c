#include<stdio.h>
int main(){
    int x;
    int z;
    int y,r;
       printf("ENTER THE FIRST NUMBER:");
       scanf("%d",&x);
       printf("ENTER OPERATION:");
       scanf("%d",&z);
       printf("ENTER THE SECOND NUMBER:");
       scanf("%d",&y);
    switch(z){
         case 1:  
             r=x+y;
             break;
         case 2:
             r=x-y;
             break;
         case 3:
             r=x*y;
             break; 
         case 4:
             if(y!=0)
             r=x/y;

             else
             printf("ERROR");
        printf("THE ANSWER IS:%d",r);

    }
    return 0;
}
