
#include <iostream>
using namespace std;
/*
 Дано трехзначное число. Вывести число, полученное при переста-
 новке цифр десятков и единиц исходного числа (например, 123 перейдет
 в 132).
 */

int main() {
    int num;
    cout<<"Введите трехзначное число :";
    cin>>num;
    int per = 0;
    int per1 = 0;
    int per2 = 0;
    if(num>99 && num<1000){
        per = num/100;
        per1 = num / 1 % 10;
        per2 = num / 10 % 10;
        cout<<"Ваше число после перестановки : ";
        cout<<per<<per1<<per2<<endl;
            }
    else if(num>-1000 && num<-99){
        per = (num)/100;
        per1 = (-num) / 1 % 10;
        per2 = (-num) / 10 % 10;
        cout<<"Ваше число после перестановки : ";
        cout<<per<<per1<<per2<<endl;
    }
    else{
        cout<<"Введите трехзначное число!"<<endl;
    }

    return 0;
}
