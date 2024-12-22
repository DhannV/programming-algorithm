#include<iostream>
using namespace std;
int main ()
{
 int inp,a=0,b=1,c=0,d=0;
 cout<<"deretan FIBONACI  \n" ;
 cout << "Masukan angka  :";
 cin>>inp;
    while (d<=inp)
    {
    cout <<" | "<<a<<" | ";
    a=b+c;
    b=c;
    c=a;
    d++;
    }
/*int inp,a=0,b=1,c=0,d=0;
 cout<<"deretan FIBONACI  \n" ;
 cout << "Masukan angka  :";
 cin>>inp;
    do{
    cout <<" | "<<a<<" | ";
    a=b+c;
    b=c;
    c=a;
    d++;
    }
    while (d<=inp);*/


}

