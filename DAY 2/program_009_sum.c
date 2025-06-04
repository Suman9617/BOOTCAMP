#include<stdio.h>
int sumd(int n){
    if(n==1)
      return n;
  return n+sumd(n-1)  ;  
}
int main(){
    int n,sum;

    scanf("%d",&n);
    sum=sumd(n);
    printf("%d",sum);
   
    return 0;
    }