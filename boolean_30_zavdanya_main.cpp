#include <iostream>
using namespace std;
/*
 Даны целые числа a, b, c, являющиеся сторонами некоторого тре-
 угольника. Проверить истинность высказывания: «Треугольник со сторо-
 нами a, b, c является равносторонним».
 */


int main()
{
   float a,b,c;
   cout<< "a: ";
   cin >> a;
 
   cout<< "b: ";
   cin >> b;
 
   cout<< "c: ";
   cin >> c;
 
   cout << ((a==b) & (a==c) & (b==c)) << endl;
   return 0;
}
