#include<stdio.h>
#include<stdlib.h>

int main(){
  int *ptr,a;
  a=5;
  *ptr=&a;
  printf(ptr);
  printf(*ptr);
  printf(a);

  return 0;
}
