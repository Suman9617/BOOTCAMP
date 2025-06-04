#include<stdio.h>
int main(){
    int n;
    float a;
    printf("enter 1 for km to m enter 2 for m to km enter 3  kg to g enter 4 g to kg");
    scanf("%d",&n);
   switch(n){
    case 1: printf("enter km\n");
            scanf("%f",&a);
            printf("meter is%f",a*1000);
            break;
    case 2: printf("enter m\n");
            scanf("%.2f",&a);
            printf("km is%.2f",a/1000);
            break; 
    case 3: printf("enter kg\n");
            scanf("%.2f",&a);
            printf("gram is%f",a*1000);
            break; 
    case 4: printf("enter km\n");
            scanf("%.2f",&a);
            printf("kg is%f",a/1000);
            break;                      
   }
    return 0;
    }
