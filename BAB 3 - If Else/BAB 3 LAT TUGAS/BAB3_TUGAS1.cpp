#include <iostream>
using namespace std;
int main()
{
    int Tb, status, bb;
    cout << " PROGRAM HITUNG BERAT BADAN IDEAL \n";
    cout << "1. Lelaki \n";
    cout << "2. Perempuan \n";
    cout << " Apa Jenis kelamin anda ? (1/2) : ";
    cin >> status;
    if (status == 1)
    {
        cout << "\n Anda memilih pilihan 1 ! \n";
        cout << "\nInput tinggi badan anda (cm) : ";
        cin >> Tb;
        bb = (Tb - 100) - ((Tb - 100) * 0, 10);
        cout << "Berat badan ideal anda yaitu : " << bb << " kg";
    }
    else if (status == 2)
    {
        cout << "\n Anda memilih pilihan 2 ! \n";
        cout << "\nInput tinggi badan anda (cm) : ";
        cin >> Tb;
        bb = (Tb - 100) - ((Tb - 100) * 0, 15);
        cout << "Berat badan ideal anda yaitu : " << bb << " kg";
    }
    else
    {
        cout << "error !! Salah memilih jenis kelamin ";
    }
}