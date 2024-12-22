#include <iostream>
using namespace std;
int main(){
	int prams;
    string nama;
    cout<<"masukan nama mu ! = ";
    cin >> nama;
    cout <<"Masukkan umur kamuh ! = ";
    cin>>prams;
    
    switch (prams)
    {
    case 1 ... 6:
    cout<<nama<<"kamu belum tergolong tingkatan pramuka";
        break;
    case 7 ... 10:
        cout<<nama<<" kamu tergolong Siaga";
        break;
    case 11 ... 15:
        cout<<nama<<" kamu tergolong Penggalang";
        break;
    case 16 ... 20:
        cout<<nama<<" kamu tergolong Penegak";
        break;
    case 21 ... 25:
        cout<<nama<<" kamu tergolong Pendega";
        break;
    case 26 ... 100:
        cout<<nama<<" kamu tergolong Majelis Pembimbing";
        break;
    default:
        cout<<"Salah Input ";
        }
}