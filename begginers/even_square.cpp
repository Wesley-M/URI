#include <stdio.h>
#include <math.h>

int main(){
  int n = 0, square = 0, i=0;

  scanf("%d", &n);

  for (i = 0; i <= n; i++){
    if (i % 2 == 0){
      printf("%d^2 = %d\n", i, i*i);
    }
  }

  return 0;
}
