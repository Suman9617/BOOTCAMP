#include<stdio.h>

int main(){
    int n,flag=1;
    scanf("%d",&n);
    if(n==0||n==1){
        flag=0;
    }
    else {
        for(int i=2;i<n;i++){
            if((n%i)==0){
              flag=0;
              break;
            }
        }
    }

    if(flag==1){
        printf("prime");
    }
    else{
        printf("not prime");
    }
   
    return 0;
    }