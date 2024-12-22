#include<iostream>
using namespace std;
int main ()
{
    int A;
    int B;
    

cout << "NIM GANJIL\n";
    cout << "a. ";
        for (A=1; A<=21 ; A+=2)
        {
           cout <<A<<" "" "; 
        }
    cout << "\nb. ";
        for (B=20; B>=0 ; B-=2)
        {
           cout <<B<<" "" "; 
        }


    
    cout << "\n\nNIM GENAP\n";
    cout << "a. ";
        for (A=0; A<=20 ; A+=2)
        {
           cout <<A<<" "" "; 
        }
    cout << "\nb. ";
        for (B=21; B>=1 ; B-=2)
        {
           cout <<B<<" "" "; 
        }
        
}