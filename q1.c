#include<stdio.h>
int main(){
    int a,b;
    char d;
    int z;
    printf("ENTER FIRST NUMBER:");
    scanf("%d",&a);
    printf("operation");
    scanf("\n%c",&d);
    printf("ENTER SECOND NUMBER:");
    scanf("%d",&b);
    switch(d){
        case'+':
        z=a+b;
        break;
        
        case'-': 
         z=a-b; 
         break;
         
        case'*':
         z=a*b;
         break;
         
        case'/':
                if(b!=0)
                z=a/b;
                else
                printf("ERROR.....");      
            break; 
        
           

         printf("THE ANSWER IS:%d",&z);
    }
         return 0;
}
 