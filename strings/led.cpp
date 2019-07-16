#include <iostream>

using namespace std;

int main() {
  int leds[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
  int t = 0;
  cin >> t;
  for (int i = 0; i < t; i++) {
    string n = "";
    cin >> n;
    int sumOfLeds = 0;
    for(char& c : n) {
      int digit = c - '0';
      sumOfLeds += leds[digit];
    }
    cout << sumOfLeds << " leds\n";
  }
}
