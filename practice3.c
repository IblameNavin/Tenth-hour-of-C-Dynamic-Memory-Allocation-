//Swapping the value of 'a' and 'b':
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter first number:");
    scanf("%d",&a);

    printf("Enter second number:");
    scanf("%d",&b);
    
    c=a;
    a=b;
    b=c;
    printf("The swapped value of a is:%d\n",a);
    printf("The swapped value of b is:%d",b);

    return 0;
}