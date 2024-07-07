//WTAP to print the largest and smallest element in an array:
#include<stdio.h>
int main(){
    int arr[]={19,22,34,66,6,78,44};
    int large,small;
    large=arr[0];
    small=arr[0];

    for(int i=0;i<7;i++){
        if(arr[i]>large){
            large=arr[i];
        }
    }
    printf("Largest element is:%d\n",large);

    for(int i=0;i<7;i++){
        if(arr[i]<small){
            small=arr[i];
        }
    }
    printf("Smallest element is:%d",small);
    return 0;

}