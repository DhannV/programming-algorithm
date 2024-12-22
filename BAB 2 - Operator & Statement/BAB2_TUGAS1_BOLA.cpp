#include <iostream>
using namespace std;
int main()
{

    const float phi = 3.14159;
    double jari;
    cout << "======================================\n";
    cout << "\tPROGRAM\tMENGHITUNG VOLUME\t\n";
    cout << "\t  DAN SETENGAH BOLA\t\n";
    cout << "======================================\n\n";
    cout << "Input jari-jari Bola : ";
    cin >> jari;
    int volumeSetengahBola, volumeBola;
    volumeBola = (4 / 3) * phi * jari * jari * jari;
    cout << "\nVolume Bola\t     : " << volumeBola << endl
         << endl;

    volumeSetengahBola = 0.5 * volumeBola;
    cout << "Volume Setengah Bola : " << volumeSetengahBola << endl;

    return 0;
}