#include<cmath>
#include <iostream>
using namespace std;
/*
 Даны координаты двух различных полей шахматной доски x1, y1, x2, y2 (целые числа, лежащие в диапазоне 1–8). Проверить истинность высказывания: «Ферзь за один ход может перейти с одного поля на другое».
 */
int main()
{
   int x1,y1,x2,y2;
   cout<<"x1:";
   cin>> x1;
 
   cout<<"y1:";
   cin>> y1;
 
   cout<<"x2:";
   cin>>x2;
 
   cout<<"y2:";
   cin>>y2;
 
    cout << ((abs(x1-x2)==abs(y1-y2)) || (x1==x2) || (y1==y2))<<endl;
    return 0;
}
