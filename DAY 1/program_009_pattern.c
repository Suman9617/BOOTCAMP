#include<stdio.h>
int main(){
    int n;
    printf("enter a number:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        {    for(int j=0;j<n-i;j++){
            printf(" ");
        }
            for(int j=0;j<i+1;j++){
                if(j==0||j==i||i==n-1){
                   printf("*");
                }
                else{
                    printf(" ");
                }
            }
            printf("\n");
        }
    return 0;
}
