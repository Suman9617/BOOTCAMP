#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%400==0){
        printf("year is leapyear");
    }
    else if(n%100==0){
        printf("year is not leapyear");
    }
    else if (n%4==0){
        printf("year is leapyear");
    }
    else{
         printf("year is not leapyear");
    }
    return 0;
    }
