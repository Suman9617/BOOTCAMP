#include<stdio.h>
int fibo(int n){
    if(n==1||n==0)
       return n;
   return fibo(n-2)+fibo(n-1);    
}
int main(){
  int n,res;
  scanf("%d",&n);
 for(int i=0;i<n;i++) 
  {res=fibo(i);
 printf("%d\n",res);}
 return 0;
}