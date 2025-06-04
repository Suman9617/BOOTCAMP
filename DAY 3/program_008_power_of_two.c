#include<stdio.h>
int poweroftwo(int n){
    if(n==0)
       return 1;
   return 2*poweroftwo(n-1);    
}
int main(){
  int n,res;
  scanf("%d",&n);
 res=poweroftwo(n);
 printf("%d\n",res);
 return 0;
}