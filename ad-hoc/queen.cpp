#include<iostream>

using namespace std;

int main(){
  int x1, x2, y1, y2, moves;

  do{
    moves = 2;

    cin >> x1 >> y1 >> x2 >> y2;

    if (x1 == 0 && x2 == 0 && y1 == 0 && y2 == 0){
      break;
    }

    if(x1 == x2 && y1 == y2){
      moves = 0;
    } else if (x1 == x2 || y1 == y2 || x2 - x1 == y2 - y1 || x2 - x1 == y1 - y2){
      moves = 1;
    }

    cout << moves << endl;
  }while(!(x1 == 0 && x2 == 0 && y1 == 0 && y2 == 0));

  return 0;
}
