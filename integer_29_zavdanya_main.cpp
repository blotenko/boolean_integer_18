
#include <iostream>
using namespace std;
/*
 Даны целые положительные числа A, B, C. На прямоугольнике раз-
 мера A × B размещено максимально возможное количество квадратов со
 стороной C (без наложений). Найти количество квадратов, размещенных
 на прямоугольнике, а также площадь незанятой части прямоугольника.
 */

int main()
{
    int a,b,c;
    int squareRectangle;
    int squareQuadrate;
    int quantity;
    int unoccupied;
    cout<<"Введите первую сторону прямоугольника :";
    cin>>a;
    cout<<"Введите вторую сторону прямоугольника :";
    cin>>b;
    cout<<"Введите  сторону квадрата :";
    cin>>c;
    if(a>0 && b>0 && c>0){
    squareRectangle = a*b;
    squareQuadrate = c*c;
        quantity =squareRectangle / squareQuadrate;
        unoccupied =squareRectangle % squareQuadrate;
        
        cout<<"Площадь прямоугольника равна "<<squareRectangle<<endl;
        cout<<"Площадь квадрата равна "<<squareQuadrate<<endl;
        cout<<"Количество квадратов, размещенных на прямоугольнике :"<<quantity<<endl;
        
        if(unoccupied==0){
            cout<<quantity<<" "<<"квадратов полностью покрывают прямоугольник"<<endl;
        }
        else{
        cout<<"Площадь  незанятой части прямоугольника : "<<unoccupied<<endl;
        }
        
    }
    else{
        cout<<"Все числа должны быть целыми и положительными"<<endl;
    }
    return 0;
}

