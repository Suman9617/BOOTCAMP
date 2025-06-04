#include<stdio.h>
int main(){
    int n,flag=0,a;
    scanf("%d",&n);
    for(int i=2;i<=n/3;i++){
      a=i*i*i;  
        if((n%a)==0){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf(" not cube free");
    }
    else{
        printf(" cube free");
    }
}