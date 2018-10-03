#include<iostream>

using namespace std;

int main(){
  int matches = 0, a = 0, b = 0, n1, n2;

  cin >> matches;

  while(matches != 0){
    a = 0;
    b = 0;
    for (int i = 0; i< matches; i++){
      cin >> n1 >> n2;
      if (n1 > n2){
        a += 1;
      }else if(n1 < n2){
        b += 1;
      }
    }
    cout << a << " " << b << endl;
    cin >> matches;
  }
  return 0;
}
