#include<iostream>

using namespace std;

int main(){
  int k, division_x, division_y, x, y;
  int distance_x_to_div_point, distance_y_to_div_point;

  do{
    cin >> k;
    cin >> division_x >> division_y;
    if (k == 0){
      break;
    }
    for(int i = 0; i < k; i++){
      cin >> x >> y;

      distance_x_to_div_point = x - division_x;
      distance_y_to_div_point = y - division_y;

      if (x == division_x || y == division_y){
        cout << "divisa\n";
      } else if(distance_x_to_div_point > 0 && distance_y_to_div_point > 0){
        cout << "NE\n";
      } else if(distance_x_to_div_point < 0 && distance_y_to_div_point > 0){
        cout << "NO\n";
      } else if(distance_x_to_div_point < 0 && distance_y_to_div_point < 0){
        cout << "SO\n";
      } else if(distance_x_to_div_point > 0 && distance_y_to_div_point < 0){
        cout << "SE\n";
      }
    }
  }while (!(k == 0));
  return 0;
}
