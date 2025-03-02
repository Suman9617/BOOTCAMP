#include<stdio.h>
int main(){
    int n,a;
    printf("enter a number:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        { a=1;
            for(int j=0;j<i+1;j++){
                printf("%d",a++);
            }
            printf("\n");
        }
    return 0;
}