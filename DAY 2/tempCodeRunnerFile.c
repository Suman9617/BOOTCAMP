include<stdio.h>

int main(){
    int n,flag=1;
    scanf("%d",&n);
   for(int j=2;j<n;j++) 
     { flag=1;
        for(int i=2;i<n;i++){
            if((n%i)==0){
              flag=0;
              break;
            }
        }
         if(flag==1){
        printf("%d\t",j);
    }
    }

   
   
    return 0;
    }