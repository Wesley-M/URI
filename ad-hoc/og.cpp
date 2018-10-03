#include<iostream>

using namespace std;

int main(){
  int daughters, sons;
  while (cin >> daughters >> sons){
    if (daughters == 0 && sons == 0){
      break;
    }
    cout << daughters + sons << endl;
  }
  return 0;
}
