
#include <iostream>
using namespace std;
/*
 Даны два целых числа: A, B. Проверить истинность высказывания:
 «Хотя бы одно из чисел A и B нечетное».
 */

int main()
{
    int A,B;
    int a,b;
    cout<<"Введите первое целое число : ";
    cin>>A;
    cout<<"Введите второе целое число : ";
    cin>>B;
    a = A%2;
    b = B%2;
     if(a!=0 && b!=0){
        cout<<"Оба числа нечетные"<<endl;
    }
    else if(a!=0 || b!=0){
        if(a==b){
            cout<<"Оба числа нечетные"<<endl;
        }
        else{
        cout<<"Одно из чисел нечетное"<<endl;
        }
    }
    
    else{
        cout<<"Оба числа четные"<<endl;
    }

    return 0;
}

