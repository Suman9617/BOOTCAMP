#include<stdio.h>
int binary(int a[],int size,int l,int h,int n)
{    
    if(a[l]==n)
      return 1;
    if(a[h]==n)
      return 1;
    if((a[l]+a[h])/2==n)
       return 1;
    if((a[l]+a[h])/2<n)
       return binary(a,size,(l+h)/2,h,n);
    if((a[l]+a[h])/2>n)
       return binary(a,size,l,(l+h)/2,n);     

return 0;
}
int main(){
    int a[7]={1,2,3,4,5,6,7};
    int size=7,l=a[0],h=a[size-1],n;
    scanf("%d",&n);
    if(binary(a,size,l,h,n)){
        printf("number found");

    }
    else{
        printf("umber not found");
    }

}