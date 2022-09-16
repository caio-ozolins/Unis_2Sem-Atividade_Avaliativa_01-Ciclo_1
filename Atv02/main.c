#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "portuguese");

  int num=0, fib1=1, fib2=1, r=0;
  printf("Digite um número >= 3: ");
  scanf("%d", &num);
  printf("1,1");
  num -= 2;
  for ( num; num > 0; num--){
    r = fib1 + fib2;
    fib1 = fib2;
    fib2 = r;
    printf(",%d", r);
  }
  
  return 0;
}
