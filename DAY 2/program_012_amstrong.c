#include<stdio.h>
#include<math.h>
int main(){
    int n,a,rev=0,count=0;
    scanf("%d",&n);
    a=n;
   while(a>0){
    count++;
    a/=10;
   }
   //printf("%d\n",count);
   a=n;
  while(a>0)
   { rev=rev+pow((a%10),count);
     a/=10;
   }

   if(rev==n){
    printf("amstrong");
   }
   else{
    printf(" not amstrong");
   }
   
    return 0;
    }