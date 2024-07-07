//Length of a string using pointer:
#include<stdio.h>
int len(char *str);

int main(){
  char str[100];
  printf("Enter a string:");
  scanf("%s",str);

  int length=len(str);
  printf("The length of a string is:%d",length);
  return 0;
}

int len(char *str){
  int count=0;
 while(*str!='\0'){
    count++;
    str++;

  }
  return count;
}
