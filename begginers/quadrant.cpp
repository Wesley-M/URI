#include<iostream>

using namespace std;

int main(){
  int x = 1, y = 1;
  while (x != 0 && y != 0){
    cin >> x >> y;
    if (x > 0){
      if (y > 0){
        cout << "primeiro\n";
      }else if(y < 0){
        cout << "quarto\n";
      }
    }else if (x < 0){
      if (y > 0){
        cout << "segundo\n";
      }else if(y < 0){
        cout << "terceiro\n";
      }
    }
    if (x == 0 || y == 0){
      break;
    }
  }
  return 0;
}
