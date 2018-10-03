#include<iostream>

using namespace std;

int main(){
  int fuel, alcool = 0, gasoline = 0, diesel = 0;
  do{
    cin >> fuel;
    switch (fuel) {
      case 1:
        alcool++;
        break;
      case 2:
        gasoline++;
        break;
      case 3:
        diesel++;
        break;
    }
  }while (fuel != 4);

  cout << "MUITO OBRIGADO\n";

  cout << "Alcool: " << alcool << endl;
  cout << "Gasolina: " << gasoline << endl;
  cout << "Diesel: " << diesel << endl;
  return 0;
}
