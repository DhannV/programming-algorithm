#include<iostream>
using namespace std;
int main ()
{

    
    cout << "a. ";
        for (int i =-5; i >=-40; i-=7)
        {
            cout<<i<<" ";
        }

    cout << "\nb. ";
        for (int j =1; j<=81; j*=-3)
        {
            cout<<j<<" ";
        }

    cout << "\nc. ";
        
        for (int k = 6 ,l=7; k<=21 ,l<=16; k*=2 ,l=l*2+2)
        {
    
            cout<<k<<k<<l<<" ";
        }

        char A;
        int B;
        int C;


        for (A='E', B=13 , C=17; A>='A', B<=208 , C>=5; A-- , B*=2 , C-=3)
        {
            cout<<"\nNILAI X = "<<A<<" ";
            cout<<"\nNILAI Y = "<<B<<" ";
            cout<<"\nNILAI Z = "<<C<<" ";
            cout<<"\n----------------";
        }
        
        
        
        
            
        
        
}