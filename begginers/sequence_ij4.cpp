#include <iostream>

using namespace std;

int main(){
  float i = 0;
  while (i <= 2.1){
    cout << "I=" << i << " J=" << 1 + i << endl;
    cout << "I=" << i << " J=" << 2 + i << endl;
    cout << "I=" << i << " J=" << 3 + i << endl;
    i += 0.2;
  }
  return 0;
}
