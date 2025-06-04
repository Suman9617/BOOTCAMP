int cubefree(int n){
    int a;
       for(int i=2;i<=n/3;i++){
      a=i*i*i;  
        if((n%a)==0){
          return 0;
           
        }
    }
    return 1;
}


#include<stdio.h>
int main(){
    int n,flag=0,x,b;
    scanf("%d",&n);
    for(int i=2;i<=n/3;i++){
      x=i*i*i;  
        if((n%x)==0){
            b=n/x;
          if(cubefree(b))
          {printf("%d\t%d\n",x,b);
          }
        }
    }

}