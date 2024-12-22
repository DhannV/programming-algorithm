#include <iostream>
using namespace std;

    void tampilhasil(string nama, string nim, char Jkelamin)
    {
        cout << " ----BIODATA MAHASISWA---- \n";
        cout << " NAMA : " << nama << endl;
        cout << " NIM  : " << nim << endl;
        cout << " JENIS KELAMIN : " << Jkelamin << endl;
    }

    int main()
    {
        string nama, nim;
        char Jkelamin;

        cout << " ----Inputan Biodata Mahasiswa---- \n";
        cout << "NAMA : ";
        cin >> nama;
        cout << "NIM  : ";
        cin >> nim;
        cout << "JENIS KELAMIN ( P/L ): ";
        cin >> Jkelamin;
        tampilhasil(nama, nim, Jkelamin);
    }

