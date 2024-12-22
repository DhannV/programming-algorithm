#include <iostream>
using namespace std;
int main()
{
    cout << " PROGRAM MENENTUKAN GRADE DARI IP NILAI BESERTA MAHASISWA \n";
    string nama;
    int nilai=0;
    cout << "Input Nama  : ";
    cin >> nama;
    cout << "Input Nilai : ";
    cin >> nilai;
    if (nilai <= 9)
    {
        cout << nama << " mendapatkan nilai F";
    }
    else if (nilai >= 10 && nilai <= 19)
    {
        cout << nama << " mendapatkan nilai E";
    }
    else if (nilai >= 20 && nilai <= 39)
    {
        cout << nama << " mendapatkan nilai D";
    }
    else if (nilai >= 40 && nilai <= 59)
    {
        cout << nama << " mendapatkan nilai C";
    }
    else if (nilai >= 60 && nilai <= 79)
    {
        cout << nama << " mendapatkan nilai B";
    }
    else if (nilai >= 80 && nilai <= 100)
    {
        cout << nama << " mendapatkan nilai A";
    }
    else
    {
        cout << " Error !! inputan kurang dari 0 / lebih dari 100 ";
    }
    
}
