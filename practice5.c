//fibonacci series of nth term:
#include<stdio.h>
int main(){
    int n1=0,n2=1,n,n3;
    printf("Enter a number:");
    scanf("%d",&n);

    printf("%d\n %d\n",n1,n2);

    for(int i=3;i<=n;i++){
    n3=n1+n2;
    printf("%d\n",n3);

    n1=n2;
    n2=n3;

    }
    
    return 0;
}