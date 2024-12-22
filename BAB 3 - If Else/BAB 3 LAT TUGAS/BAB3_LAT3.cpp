#include <iostream>
using namespace std;
int main()
{
    cout << " \t| Program Menghitung Luas Segitiga |\n";
    cout << " \t|     dan Volume Prisma Segitiga   |\n\n";
    int bangun;
    cout << " 1. Segitiga\n";
    cout << " 2. Prisma Segitiga\n";
    cout << " pilih salah satu di atas (1/2) : ";cin >> bangun;
    if (bangun == 1)
    {
        cout << " \n Pilihan anda (1) Segitiga ";
        float alas, tinggi, luas;
        cout << " \n Input Alas \t: ";
        cin >> alas;
        cout << " Input Tinggi \t: ";
        cin >> tinggi;
        luas = (alas * tinggi) / 2;
        cout << " Luas Segitiga \t: " << luas;
    }
    else if (bangun == 2)
    {
        cout << " \n Pilihan anda (2) Prisma Segitiga ";
        float LuAlas, tinggi, Volume;
        cout<<"\n Input Luas Alas \t: ";
        cin >> LuAlas;
        cout << " Input Tinggi \t\t: ";
        cin >>tinggi;
        Volume = 0.5*LuAlas*tinggi;
        cout << " Volume Prisma Segitiga : " << Volume;
    }
    else
    {
        cout << "\n\tInput (1/2) ! ";
    }
    
}