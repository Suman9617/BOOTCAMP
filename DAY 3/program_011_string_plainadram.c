#include<stdio.h>
#include<string.h>

int rev(char s[],int l,int r){
   
     if(l>=r)
    return 1 ;
   if(s[l]!=s[r]) 
   {
    
     return 0;
   }
   rev(s,l++,r--); 
 return 1;
}
int main(){
 char s[50];
 scanf("%s",s);
 int l=0,r=strlen(s)-1,res;

 res=rev(s,l,r);
if(res){
    printf("pal");

}
else{
    printf("not pal");
}
 return 0;
}