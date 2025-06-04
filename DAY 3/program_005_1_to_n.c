#include<stdio.h>
void print(int i,int n){
    if(i>n)
      { return ;
      }
  printf("%d\t",i);
  print(++i,n)  ; 
}
int main(){
  int n,i;
  scanf("%d",&n);
  print(i,n);
 return 0;
}