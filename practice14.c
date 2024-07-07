//Program to write and display the content of a file:
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("Navin.txt","w");
    char ch[100]="Hi iam navin";


    fprintf(fptr,"%s",ch);
    printf("%s",ch);

    fclose(fptr);
    return 0;

}
