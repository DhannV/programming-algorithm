#include<iostream>
using namespace std;

int main ()
{
int a,b,c,d;
int g=0;
int h=1;

cout << "a.";
for (a =-5; a>=-40; a=a-7)
{
cout << a << "\t";
}

cout << endl;

cout << "B.";
for (b =1; b<=81; b=b*-3)
{
cout << b << "\t";
if (b==-243){
    break;
}


}
cout << endl;

cout << "c.";
for (c =6; c<=21; c=c+g)
{
cout << c << "\t";
g++;
}
cout << endl;

cout << "d.";
cout << h<< "\t";
for (d =2; d<10; d++,d++)
{
cout << d << "\t";
}cout <<d-h;
}