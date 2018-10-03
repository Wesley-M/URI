#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
  int op = 0, novo_grenal = 0, g1 = 0, g2 = 0, inter = 0, gremio = 0, draws = 0;
  float n, soma;

  do{
    novo_grenal++;
    cin >> g1 >> g2;

    if (g1 > g2){
      inter++;
    }else if(g1 < g2){
      gremio++;
    }else{
      draws++;
    }

    cout << "Novo grenal (1-sim 2-nao)\n";
    cin >> op;
  }while (op != 2);

  cout << novo_grenal << " grenais\n";
  cout << "Inter:" << inter << endl;
  cout << "Gremio:" << gremio << endl;
  cout << "Empates:" << draws << endl;

  if (inter > gremio){
    cout << "Inter venceu mais\n";
  }else if (inter < gremio){
    cout << "Gremio venceu mais\n";
  }else{
    cout << "Não houve vencedor\n";
  }
  return 0;
}
