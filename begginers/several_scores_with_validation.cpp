#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
  int cont_notas_validas = 0, novo_calculo = 0;
  float n, soma;
  while (cont_notas_validas < 2){
    cin >> n;
    if (n >= 0 && n <= 10){
      cont_notas_validas += 1;
      soma += n;
      if (cont_notas_validas == 2){
        printf("media = %.2f\n", (soma/2));
        do{
          cout << "novo calculo (1-sim 2-nao)\n";
          cin >> novo_calculo;
        }while (novo_calculo < 1 || novo_calculo > 2);
        if (novo_calculo == 1){
          cont_notas_validas = 0;
          soma = 0;
        }else if (novo_calculo == 2){
          break;
        }
      }
    }else{
      cout << "nota invalida\n";
    }
  }
  return 0;
}
