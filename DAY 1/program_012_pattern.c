#include<stdio.h>
int main(){
    int n;
    printf("enter a number:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        {   for(int j=0;j<i;j++){
            printf(" ");
        }
            for(int j=0;j<n-i;j++){
               if(i==0||j==0||i+j==n-1)
             printf("*");
            else
            printf(" "); 
            }
            printf("\n");
        }
    return 0;
}