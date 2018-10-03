#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
  int x = 0, y = 0;

  cin >> x >> y;
  for (int i = 1; i <= y; i++){
    cout << i;
    if (i % x == 0){
      cout << endl;
    }else{
      cout << " ";
    }
  }

  return 0;
}
