#include<iostream>
#include<string>
using namespace std;

int main(){
    double NR;
    int N1, N2, N3;
    string nama;

    cout<<"Masukkan Nama Siswa :";
    getline(cin, nama);
    cout<<"Masukkan Nilai 1:";
    cin>>N1;
    cout<<"Masukkan Nilai 2:";
    cin>>N2;
    cout<<"Masukkan NIlai 3:";
    cin>>N3;

    NR=(N1+N2+N3)/3;

    if (NR>=85) {
    cout<<"Siswa yang bernama :"<<nama<<endl;
    cout<<"Memperoleh Nilai Rata-Rata :"<<NR<<endl;
    cout<<"Hadiah yang didapat adalah komputer core i5";
    }
    else if (NR>=70) {
        cout<<"Siswa yang bernama :"<<nama<<endl;
        cout<<"Memperoleh Nilai Rata-Rata :"<<NR<<endl;
        cout<<"Hadiah yang didapat adalah uang sebesar 250000";
    }
    else {
        cout<<"Siswa yang bernama :"<<nama<<endl;
        cout<<"Memperoleh Nilai Rata-Rata :"<<NR<<endl;
        cout<<"Hadiah yang didapat adalah hiburan";
    }
}