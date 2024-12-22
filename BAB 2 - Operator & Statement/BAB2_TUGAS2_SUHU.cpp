#include <iostream>
using namespace std;
int main (){

cout<<"\t\t======================================\n";
cout<<"\t\t\tPROGRAM\tKONVERENSI SUHU\n";
cout<<"\t\t======================================\n";

float celcius ,farenheit ,reamur ,kelvin;
cout<<"masukkan suhu celcius\t: ";
cin>>celcius;

farenheit=(celcius * 9/5) + 32;
cout<<"jadi,\t"<<celcius<<"\tderajat celcius\t\t: "<<farenheit<<" derajat farenheit\n";

reamur=(farenheit - 32.0) * (4.0 / 9.0);
cout<<"\t"<<farenheit<<"\tderajat farenheit\t: "<<reamur<<" derajat reamur\n";

kelvin=(reamur / 0.8) + 273.15;
cout<<"\t"<<reamur<<"\tderajat reamur\t\t: "<<kelvin<<" derajat kelvin\n";
return 0;
}