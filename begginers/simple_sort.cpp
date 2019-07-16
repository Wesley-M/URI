#include<iostream>

using namespace std;

int main(){
  int numbers[3];
  cin >> numbers[0] >> numbers[1] >> numbers[2];

  string old_array = "";
  for (int i = 0; i < 3; i++){
    old_array += to_string(numbers[i]) + "\n";
  }

  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3-i-1; j++){
      if (numbers[j] > numbers[j+1]){
        swap(numbers[j], numbers[j+1]);
      }
    }
  }

  cout << numbers[0] << endl << numbers[1] << endl << numbers[2] << "\n";
  cout << endl << old_array;
  return 0;
}
