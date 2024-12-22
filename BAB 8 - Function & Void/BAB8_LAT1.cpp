//= (4/3) πr³. Rumus untuk menghitung volume setengah bola adalah V = (2/3) πr.

#include <iostream>
using namespace std;

int hitungdigit()
{
    int nim;
    cout << " Input NIM kamu : ";
    cin >> nim;
    int hitnim = nim % 100 + 10;

    return hitnim;
}
float hitungvolumebola(int hitnim)
{
    const float phi = 3.14;
    float bola = (4 / 3) * phi * hitnim * hitnim * hitnim;
    return bola;
}

float hitungvolumesetbola(int hitnim)
{
    const float phi = 3.14;
    float setengahbola = (2.0 / 3) * phi * hitnim;
    return setengahbola;
}

int main()
{
    int input;
    cout << " [1] Volume Bola \n";
    cout << " [2] Volume Setengah Bola \n";
    cout << " Input (1/2) : ";
    cin >> input;
    if (input == 1)
    {
        int hitnim = hitungdigit();
        float volumebola = hitungvolumebola(hitnim);
        cout << " jari-jari " << hitnim << " Volume Bola :" << volumebola;
    }

    else if (input == 2)
    {
        int hitnim = hitungdigit();
        float volumesetbola = hitungvolumesetbola(hitnim);
        cout << " jari-jari " << hitnim << " Volume setengah Bola :" << volumesetbola;
    }
}
