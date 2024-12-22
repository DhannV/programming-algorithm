#include<iostream>
using namespace std;
int main ()
{
    /*int a, b;
    cout << "input nilai kelipanta :";cin>>a;
    cout << "input nilai akhir :";cin>>b;
    cout<<endl;


    while (a<=b)
    {
        if (a%b==0)
        {
            cout << " * ";
        }
        
    }*/
    int angka_maksimum,angka;
    cout << " masukkan nilai kelipatan ";
    cin >> angka;
    cout << "Masukkan angka maksimum: ";
    cin >> angka_maksimum;

    while (angka <= angka_maksimum) {
        if (angka_maksimum % angka == 0) {  
            cout << "* ";
        } else {
            cout << angka << " ";
        }

        
    }
    
}