#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
  int cont_notas_validas = 0;
  float n, soma;
  while (cont_notas_validas < 2){
    cin >> n;
    if (n >= 0 && n <= 10){
      cont_notas_validas += 1;
      soma += n;
    }else{
      cout << "nota invalida\n";
    }
  }
  printf("media = %.2f\n", (soma/2));
  return 0;
}
