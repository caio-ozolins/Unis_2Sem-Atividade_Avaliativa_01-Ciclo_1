#include <stdio.h>
#include <locale.h>

void digitos(char str[], int i){
  while (str[i] != '\0'){
    i++;
  }
}

int main(){
  setlocale(LC_ALL, "portuguese");

  char nome[50], email[50], tel[15];
  int total=0;
  printf("Digite um nome: ");
  scanf("%s", nome);
  printf("Digite um e-mail: ");
  scanf("%s", email);
  printf("Digite um telefone: ");
  scanf("%s", tel);
  printf("----------------------------------------\n");
  digitos(nome, total);
  printf("Nome: %d d�gitos\n");
  digitos(email, total);
  printf("E-mail: %d d�gitos\n");
  digitos(tel, total);
  printf("Telefone: %d d�gitos\n");

  return 0;
}
