#include<iostream>
using namespace std;

int main(){
    float r, t, luas, volume;
    const float phi=3.14;

    cout<<"Masukkan jari-jari :";
    
    cout<<"\nMasukkan jari-jari :";
    cin>>r;

    cout<<"Masukkan tinggi tabung: ";
    cin>>t;
    
    luas= phi*r*r;
    volume= phi *r*r*t;

    cout<<"\nHasil Perhitungan:"<<endl;

    cout<<"Luas lingkaran="<<luas<<endl;
    cout<<"Volume Tabung="<<volume<<endl;

    return 0;

}