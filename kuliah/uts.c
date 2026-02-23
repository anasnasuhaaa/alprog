#include <stdio.h>
int main(){
  int uts = 30;
  int uas = 100;

  int mean = (uts + uas) / 2;
if(uts > 40 && uas > 40 && mean > 60){
  printf("Lulus");
}else if((uts < 40 || uas <40) && mean > 60){
  printf("Lulus Bersyarat");
}else if(mean < 60){
  printf("TIDAK LULUS");
}
  return 0;
}