#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "portuguese");

  struct{
  char nome[50], email[50], tel[15];
  }Dados;
  int digNome = 0, digEmail = 0, digTel = 0;
  printf("Insira um nome: ");
  scanf("%s", Dados.nome);
  printf("Insira um e-mail: ");
  scanf("%s", Dados.email);
  printf("Insira um telefone: ");
  scanf("%s", Dados.tel);
  printf("----------------------------------------------------\n");
  while (Dados.nome[digNome] != '\0'){
    digNome++;
  }
  printf("Nome: %d d�gitos\n", digNome);
  while (Dados.email[digEmail] != '\0'){
    digEmail++;
  }
  printf("E-mail: %d d�gitos\n", digEmail);
  while (Dados.tel[digTel] != '\0'){
    digTel++;
  }
  printf("Telefone: %d d�gitos\n", digTel);

  return 0;
}
