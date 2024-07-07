//Checking if a string is palindrome or not:
#include<stdio.h>
#include<string.h>

int main(){
    char str1[50],str2[50];
   printf("Enter a string:");
   scanf("%s",str1);

    strcpy(str2,str1);
    strrev(str2);

    if(strcmp(str1,str2)==0){
        printf("The string is palindrome");
    }
    else{
        printf("The string is not palindrome");
    }
    return 0;
}
