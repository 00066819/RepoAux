/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: uca
 *
 * Created on 2 de septiembre de 2019, 14:54
 */

#include <iostream>
using namespace std;

int main(){
    
    int a[10], n=0;
    double s, p;
    cout<<"Suma y promedio de 10 enteros"<<endl;
        
    while (n<10){
        cout<<"Digite el entero "<<n+1<<": ";
        cin>>a[n];
        s+=a[n];
        p=s/10;
        n++;
    }
    cout<<"La suma de los valores es: "<<s<<endl;
    cout<<"El promedio de los valores es: "<<p<<endl;
    
    return 0;
}