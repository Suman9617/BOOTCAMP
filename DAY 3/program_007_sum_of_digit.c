#include<stdio.h>
int sumofdigit(int n){
    if(n==0)
       return n;
   return n%10+sumofdigit(n/10);    
}
int main(){
  int n,res;
  scanf("%d",&n);
 res=sumofdigit(n);
 printf("%d\n",res);
 return 0;
}