#include<stdio.h>
int main(){
    int n;
    printf("enter a number:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        { char a= 'A';
            for(int j=0;j<i+1;j++){
                printf("%c",a++);
            }
            printf("\n");
        }
    return 0;
}