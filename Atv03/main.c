#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "portuguese");

  int dia, mes, ano, n1, n2;
  printf("Insira sua data de nascimento (dd mm aaaa): ");
  scanf("%d %d %d", &dia, &mes, &ano);
  n1 = dia*100+mes;
  n2 = n1 + ano;
  n1 = n2%100;
  n2 = (n2-n1)/100;
  n1 += n2;
  n1 = n1%5;
  switch (n1){
  case 0:
    printf("O seu perfil � T�mido");
    break;
  case 1:
    printf("O seu perfil � Sonhador");
    break;
  case 2:
    printf("O seu perfil � Paquerador");
    break;
  case 3:
    printf("O seu perfil � Atraente");
    break;
  case 4:
    printf("O seu perfil � Irresist�vel");
    break;
  }
  
  return 0;
}
