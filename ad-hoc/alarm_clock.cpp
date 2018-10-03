#include<iostream>
#include<cmath>

using namespace std;

int main(){
  int h1, h2, m1, m2, minutes = 0;
  bool to_stop = false;

  do{
    cin >> h1 >> m1 >> h2 >> m2;
    to_stop = (h1 == 0 && h2 == 0 && m1 == 0 && m2 == 0);

    if (h2 <= h1 && m2 < m1 || h2 < h1){
      h2 += 24;
    }

    minutes = (h2-h1)*60 + (m2-m1);

    if (to_stop){
      break;
    }
    cout << minutes << endl;
  } while (!to_stop);
  return 0;
}
