#include <iostream>

using namespace std;

int main(){
  int n = 0, x = 0;

  cin >> n;

  for (int i = 1; i <= 10; i++){
    cout << i <<  " x " << n << " = " << i*n << endl;
  }

  return 0;
}
