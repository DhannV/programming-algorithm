#include<iostream>
using namespace std;
int main()
{
    cout <<"a. ";
    int p=22, q=-20;
    while (p>=q)
    {
        cout <<p<<" ";
        p-=5;
        if (p==7)
        {
            p=0;
        } 
    }

    cout <<"\nb. ";
    char a='F', b='R';
    while (a<=b)
    {
        cout <<a<<" ";
        a+=3;
    }

    cout <<"\nc. ";
    char c='Y', d='E';
    while (c>=d)
    {
        cout<<endl<<c<<" \t\n";
        c-=5;
    }

    cout <<"\nd. ";
    char e='d';
    int g=4, h=14, i=1;
    while(g<=h)
    {
        cout <<g<<" "<<e<<" ";
        g=g+i;
        e=e+i;
        i++;
    }

    cout <<"\ne. ";
    int j=-17 ,k=13;
    while (j<=k)
    {
        cout <<j<<" ";
        j+=6;
        if (j==1)
        {
            j+=6;
        }
    }
    cout<<"\nf. ";
    char x='K';
    int y=4, z=1;
    while (y<=14)
    {
        cout << x <<" "<<y<<" ";
        x-=2;
        y=y+z;
        z++;
    }
    
    
}
   /* cout <<"\nf. ";
    char l='K', m='C' ;
    int n=4, o=14, y=0;
    do
    {
        cout <<l<<" ";
        l-=2;
        cout <<n<<" ";
        n=n+y;
        y++;
    } while (l>=m ,n<=o); */
