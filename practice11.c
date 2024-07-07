//Swap the value of a and b using pointers:
#include<stdio.h>
void swap(int *a,int *b);

int main(){
    int a,b;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);

    printf("Before swap:a=%d\t & b=%d\n",a,b);

    swap(&a,&b);
    printf("After swap:a=%d\t & b=%d",a,b);

    return 0;
}

void swap(int *a,int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;

}