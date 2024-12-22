#include <iostream>
#include <math.h>
using namespace std;

float hitung(float h)
{
    float hasil = 8 * pow(h, 2) - (3 * h) + 5;
    cout << " HASIL : ";
    return hasil;
}

int main()
{
    float nilai;
    cout << " 3. \n";
    cout << " INPUT : ";
    cin >> nilai;
    cout << hitung(nilai);
    return 0;
}