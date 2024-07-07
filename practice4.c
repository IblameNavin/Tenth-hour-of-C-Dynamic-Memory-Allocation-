//Factorial of a given number:
#include<stdio.h>
int main(){
    int a,fact=1;
    printf("Enter a number:");
    scanf("%d",&a);

    if(a<0){
        printf("Factorial of negative numbers dont exist");
    }
    else{
        for(int i=1;i<=a;i++){
            fact=fact*i;
        }
        printf("factorial of %d is:%d",a,fact);
    }
    return 0;
}