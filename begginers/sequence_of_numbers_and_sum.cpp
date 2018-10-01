#include <iostream>

using namespace std;

int main(){
  int n1 = 0, n2 = 0, sum = 0;

  while (n1 >= 0 && n2 >= 0){
    cin >> n1 >> n2;
    if (n1 <= 0 || n2 <= 0){
      break;
    }
    if (n1 > n2){
      swap(n1, n2);
    }
    for (int i = n1; i <= n2; i++){
      cout << i << " ";
      sum += i;
    }
    cout << "Sum=" << sum << endl;
  }
}
