#include <iostream>
using namespace std;


int segitiga(int a, int t){
    if (a,t==0)
    {
        return 0;
    } else
    {
        return  0.5*(a*t);
    }
}

int persegi(int s){
    if (s==0)
    {
        return 0;
    }else
    {
        return s*s*s;
    }
}

float lingkaran(int r){
    if (r==0)
    {
        return 0;
    }else
    {
        return 3.14*(r*r);
    }
    
    
}

int pilihan;

int main(){
    cout << "===Pilihan Menghitung Luas===" << endl;
    cout << "1. Luas Segitiga" << endl;
    cout << "2. Luas Persegi" << endl;
    cout << "3. Luas Lingkaran" << endl;
    cout << "Pilih: ";
    cin >> pilihan;

    switch (pilihan)
    {
    case 1 :
    int alas,tinggi;
    cout << "Kamu Memilih Untuk Menghitung Luas Segitiga" << endl;
    cout << "Masukkan alas: ";
    cin >> alas;
    cout << "Masukkan Tinggi: ";
    cin >> tinggi;
    cout << "\nJadi Luas Segitiga Adalah " << segitiga(alas,tinggi) << " cm";
    cout << "\nYeayyyy Perhitungan selesai";
    break;

    case 2 :
    int sisi;
    cout << "Kamu Memilih Untuk Menghitung Luas Persegi" << endl;
    cout << "Masukkan Panjang Sisi Persegi: ";
    cin >> sisi;
    cout << "\n Jadi Luas Persegi Adalah " << persegi(sisi) << " cm";
    cout << "\nYeayyyy Perhitungan selesai";
    break;

    case 3:
    float jari_jari;
    cout << "Kamu Memilih Untuk Menghitung Luas Lingkaran" << endl;
    cout << "Masukkan Jari-jari Lingkaran: ";
    cin >> jari_jari;
    cout << "\n Jadi Luas Lingkaran Adalah: " << lingkaran(jari_jari) << endl;
     cout << "\nYeayyyy Perhitungan selesai";

    

       
    
    default:
        break;
    }
}