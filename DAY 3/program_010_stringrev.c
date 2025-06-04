#include<stdio.h>
#include<string.h>
void rev(char str[],int l,int r){
     if(l>=r)
    return ;
  char team;
    team=str[l];
    str[l]=str[r];
    str[r]=team;

   rev(str,l+1,r-1);
    
}
int main(){
 char str[50];
 scanf("%s",str);
 int l=0,r=strlen(str)-1;
 
rev(str,l,r);
printf("%s",str); 
 return 0;
}