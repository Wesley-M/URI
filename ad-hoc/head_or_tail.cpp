#include<iostream>

using namespace std;

int main(){
  int n = 0, mary = 0, john = 0, game = 0;

  cin >> n;

  while (n != 0){
    mary = 0;
    john = 0;
    for (int i = 0; i < n; ++i){
      cin >> game;
      if (game == 0){
        mary++;
      }else{
        john++;
      }
    }
    cout << "Mary won " << mary << " times and John won " << john << " times\n";
    cin >> n;
  }
  return 0;
}
