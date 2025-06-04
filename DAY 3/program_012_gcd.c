#include<stdio.h>
int gcd(int a,int b){
  if(b==0)
  return a;
return gcd(b,a%b);
         
}
int main(){
  int a,b,res,n;
  scanf("%d%d",&a,&b);
  n=(a>b)?b:a;
 res=gcd(b,a);

 printf("%d\n",res);
 return 0;
}
