#include <iostream>

using namespace std;

int main(){
  int n1, n2 = 0;

  while (n1 != n2){
    cin >> n1 >> n2;
    if (n1 > n2){
      cout << "Decrescente" << endl;
    }else if(n1 < n2){
      cout << "Crescente" << endl;
    }else{
      break;
    }
  }

  return 0;
}
