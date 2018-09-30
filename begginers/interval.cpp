#include<iostream>

using namespace std;

int main(){
  float number = 0;
  cin >> number;

  if (number < 0 || number > 100){
    cout << "Fora de intervalo\n";
  }else{
    cout << "Intervalo ";
    if (number >= 0 && number <= 25){
      cout << "[0,25]\n";
    }else if (number > 25 && number <= 50){
      cout << "(25,50]\n";
    }else if(number > 50 && number <= 75){
      cout << "(50,75]\n";
    }else if(number > 75 && number <= 100){
      cout << "(75,100]\n";
    }
  }

  return 0;
}
