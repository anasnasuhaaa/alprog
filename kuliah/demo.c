#include <stdio.h>
int main(){
  int a = 8;
  int b = 7;
  int c = 6;
  if(a>b>c){
    // (a>b) > c
    printf("Menurun");
  }else{
    printf("Tidak Menurun");
  }
  return 0;
}