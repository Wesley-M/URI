#include<iostream>
#include<string>

using namespace std;

int main(){
  string pass = "";
  while (pass != "2002"){
    cin >> pass;
    if (pass != "2002"){
      cout << "Senha Invalida\n";
    }
  }
  cout << "Acesso Permitido\n";
  return 0;
}
