#include<iostream>

using namespace std;

int main(){
  int n = 0, x = 0;

  cin >> n;

  for (int i = 0; i < n; i++){
    cin >> x;
    if(x == 0){
      cout << "NULL" << endl;
    }else if (x % 2 == 0){
      cout << "EVEN " << ((x > 0)? "POSITIVE" : "NEGATIVE") << endl;
    }else{
      cout << "ODD " << ((x > 0)? "POSITIVE" : "NEGATIVE") << endl;
    }
  }

  return 0;
}
