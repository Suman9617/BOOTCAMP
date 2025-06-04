#include<stdio.h>
int countofdigit(int n){
    if(n==0)
       return 0;
   return 1+countofdigit(n/10); 
} 
int main(){
  int n,res;
  scanf("%d",&n);
 res=countofdigit(n);
 printf("%d\n",res);
 return 0;
}