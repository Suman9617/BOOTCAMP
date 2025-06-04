#include<stdio.h>

int main(){
    int n,a,rev=0;
    scanf("%d",&n);
    a=n;
   while(a>0){
   rev=rev*10+(a%10);
   a/=10;
   }
  
   if(rev==n){
    printf("palindrome");
   }
   else{
    printf(" not palindrome");
   }
   
    return 0;
    }