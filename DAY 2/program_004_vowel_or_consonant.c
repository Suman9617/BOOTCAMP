#include<stdio.h>
int main(){
   char ch;
   scanf("%c",&ch);
   if(ch=='a'||ch=='e'||ch=='i'||ch=='u'||ch=='o'||ch=='A'||ch=='E'||ch=='I'||ch=='U'||ch=='O')
        {
            printf("vowel");
        }
    else{
        printf("consonant");
    }    
    return 0;
    }
