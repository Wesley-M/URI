#include <iostream>

using namespace std;

int main(){
  int n = 0, x = 0, y = 0, aux = 0, sum_of_odd_numbers = 0;

  cin >> n;

  for (int i = 0; i < n; i++){
    cin >> x >> y;
    if (x > y){
      swap(x, y);
    }
    for (int j = x+1; j < y; j++){
      if (j % 2 == 1){
        sum_of_odd_numbers += j;
      }
    }
    cout << sum_of_odd_numbers << endl;
    sum_of_odd_numbers = 0;
  }

  return 0;
}
