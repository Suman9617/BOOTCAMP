#include<stdio.h>
int main(){
   char ch;
   scanf("%c",&ch);
   switch(ch){
    case 'a':printf("vowel");
             break;
    case 'e':printf("vowel");
             break;
    case 'i':printf("vowel");
             break;
    case 'o':printf("vowel");
             break;
    case 'u':printf("vowel");
             break; 
    case 'A':printf("vowel");
             break;
    case 'E':printf("vowel");
             break;
    case 'I':printf("vowel");
             break;
    case 'O':printf("vowel");
             break;
    case 'U':printf("vowel");
             break;
    default:if(ch>='a'&&ch<='z'){
         printf("cosonant");}
         else if(ch>='A'&&ch<='Z'){
         printf("cosonant");}
         else{
            printf("not valid");
         }
    

   }
    return 0;
    }