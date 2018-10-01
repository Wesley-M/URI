#include <stdio.h>

int main(){
  int n = 0;
  float n1 = 0, n2 = 0, n3 = 0;
  float avg = 0;

  scanf("%d", &n);

  for (int i = 0; i < n; i++){
    scanf("%f%f%f", &n1, &n2, &n3);
    avg = (n1*2.0 + n2*3.0 + n3*5.0)/10.0;
    printf("%.1f\n", avg);
  }

  return 0;
}
