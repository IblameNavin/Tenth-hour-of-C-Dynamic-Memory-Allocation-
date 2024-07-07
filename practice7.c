//Check if a number is palindrome or not:
#include<stdio.h>
int main(){
    int n,r,s=0,z;
    printf("Enter a number:");
    scanf("%d",&n);
    z=n;
    while(n!=0){
    r=n%10;
    s=s*10+r;
    n=n/10;
    }
    if(z==s){
    printf("The number is palindrome");
    }
    else{
    printf("The number is not palindrome");
    return 0;
    }



}