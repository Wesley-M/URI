#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
  int n = 0;
  float x, y;

  cin >> n;

  for (int i = 0; i < n; i++){
    cin >> x >> y;
    if (y == 0){
      cout << "divisao impossivel\n";
    }else{
      printf("%.1f\n", x/y);
    }
  }
  return 0;
}
