
#include <iostream>
using namespace std;
/*
 Даны два целых числа: A, B. Проверить истинность высказывания:
 «Ровно одно из чисел A и B нечетное».
 */


int main ()
 
{

 
  int A, B;
    bool trueFalse;
  cout << "Введите число A: ";
  cin >> A;
  cout << "Введите число B: ";
  cin >> B;
  trueFalse = A%2==1 && B%2==0 || A%2==0 && B%2==1;
  trueFalse = (A%2 + B%2) == 1;
  cout << "Ровно одно из чисел A и B нечетное: "<< trueFalse << endl;
    cout<<"1-True; 0-False"<<endl;
  system ("pause");
  return 0;
}


