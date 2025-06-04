#include<stdio.h>
int fibo(int n){
    if(n==1||n==0)
       return n;
   return fibo(n-2)+fibo(n-1);    
}
int main(){
  int n,res;
  scanf("%d",&n);
 res=fibo(n);
 printf("%d\n",res);
 return 0;
}