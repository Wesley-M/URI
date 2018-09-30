#include<iostream>

using namespace std;

int main(){
  float n1, n2, n3, n4, n5, average;

  cin >> n1 >> n2 >> n3 >> n4;

  average = (n1*2 + n2*3 + n3*4 + n4)/10;

  cout.precision(2);

  cout << "Media: " << average << endl;

  if (average >= 7.0){
    cout << "Aluno aprovado.\n";
  } else if(average < 5.0){
    cout << "Aluno reprovado.\n";
  } else if (average >= 5 && average < 7){
    cout << "Aluno em exame.\n";
    cin >> n5;

    cout << "Nota do exame: " << n5 << endl;

    average = (average + n5)/2;

    if (average >= 5){
      cout << "Aluno aprovado.\n";
    }else if(average < 5){
      cout << "Aluno reprovado.\n";
    }

    cout << "Media final: " << average << endl;
  }

  return 0;
}
