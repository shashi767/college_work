#include<stdio.h>
int main(){
 int l;
 int b;
 printf("ENTER THE VALUE OF LENTH:");
 scanf("%d",&l);
 printf("ENTER THE VALUE OF BREADTH:");
 scanf("%d",&b);
 if((l*b)>2+(l*b)){
    printf("AREA IS GRATER THAN PERIMETER");
 }
 else{
    printf("AREA IS LESS THAN PERIMETER");
 }
 return 0;
}