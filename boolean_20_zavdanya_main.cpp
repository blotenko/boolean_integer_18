#include <iostream>
using namespace std;
/*
 Дано трехзначное число. Проверить истинность высказывания:
 «Все цифры данного числа различны».
 */


int main ()
 
{
    int num;
    cout<<"Введите трехзначное число : ";
    cin>>num;
    if(num>99 && num<1000){
        int first =num/100;
        int third = num%10;
        int second = (num/10)%10;
        if(first != second && second!= third && first!=third){
            cout<<"Все числа различны"<<endl;
        }
        else{
            cout<<"Не истина"<<endl;
        }
        
    }
    else{
        cout<<"Введите трехзначное число!"<<endl;
    }
  return 0;
}
