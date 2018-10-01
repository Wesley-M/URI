#include<iostream>

using namespace std;

int main(){
  int n, maior, index = 0;
  for (int i = 0; i < 100; i++){
    cin >> n;
    if (n > maior){
      index = i+1;
      maior = n;
    }
  }
  cout << maior << endl;
  cout << index << endl;
  return 0;
}
