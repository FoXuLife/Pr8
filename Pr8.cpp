#include <math.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    int x,v1,v2,a1,a2,t,s1,s2;
    cout<<"Расстояние между машинками: ";
    cin>>x;
    cout<<"Скорость первого: ";
    cin>>v1;
    cout<<"Скорость воторого: ";
    cin>>v2;
    cout<<"Введите ускорение первого авто: ";
    cin>>a1;
    cout<<"Введите ускорение второго авто: ";
    cin>>a2;
    t=(-(v1+v2)+sqrt((v1+v2)*(v1+v2)+(a1+a2)*2*x))/(a1+a2);
    cout<<"Время встречи: "<<t<<endl;
    s1=((a1*(t*t))/2)+v1*t;
    s2=((a2*(t*t))/2)+v2*t;   
    cout<<"Расстояние первого: "<< s1<<endl; 
    cout<<"Расстояние второго: "<< s2<<endl; 
}
