#include <iostream>
using namespace std;
//#define tahun 2023 //menghapus cons define tahun 2023
int main()
{
    int tahun;
    cout << "Masukan Tahun Saat Ini : "; // penulisan Cout harus kecil semua cout . <> jadi << karena cout.
    cin>>tahun; // CIN tidak huruf besar cin . dan cin menggunakan >> . tidak menggunakan tanda " "
    cout << "Praktikum Algoritma Tahun Ajaran " <<tahun << "/"<<tahun + 1; // penulisan Cout harus kecil semua cout . >> jadi << karena cout. setelah penulisan Ajaran tidak >> tapi <<
return 0; // pnulisan reTurn harus kecil semua
}
