#include<stdio.h>
int fact(int n){
    if(n==1)
       return n;
   return n*fact(n-1);    
}
int main(){
  int n,res;
  scanf("%d",&n);
 res=fact(n);
 printf("%d\n",res);
 return 0;
}