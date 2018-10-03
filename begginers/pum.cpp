#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
  int n = 0, j = 1;

  cin >> n;
  for (int i = 1; i <= n; i++){
    printf("%d %d %d PUM\n", j, j+1, j+2);
    j += 4;
  }
  return 0;
}
