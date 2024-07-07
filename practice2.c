//Take a number from user and output its cube:
#include<stdio.h>
#include<math.h>
int main(){
    int n,cube;
    printf("Enter a number:");
    scanf("%d",&n);

    cube=pow(n,3);
    printf("Cube of a number is:%d",cube);
    return 0;


}