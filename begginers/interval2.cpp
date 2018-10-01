#include <iostream>

using namespace std;

int main(){
  int n = 0, x = 0, in = 0, out = 0;
  cin >> n;

  for (int i = 0; i < n; i++){
    cin >> x;
    if (x >= 10 && x <= 20){
      in++;
    }else{
      out++;
    }
  }

  cout << in << " in\n";
  cout << out << " out\n";

  return 0;
}
