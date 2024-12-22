#include <iostream>
using namespace std;
const int roti = 3;
string namaroti[roti]={"Snacks\t","Bakery\t","Beverage"};
int nilai [roti][5];
int data;
int total=0;
int maksimal=0;
int minimal=100;
int rata2;

void garis ()
{
    for (int i = 0; i < 50; i++)
    {
        cout << "-";
    }
}

void inputan ()
{
    cout << " input Amount of Days(s) : ";
    cin >>data;
    garis();
    cout << "\nInput sales of Products (Units)\n";
    for (int i = 0; i < roti; i++)
    {
        garis();
        cout <<endl<< namaroti[i]<<endl;
        garis();
        cout << endl;
        for (int j = 0; j < data; j++)
        {
            cout << "Sales Day "<<j+1<<" : ";
            cin >> nilai [i][j];

            total +=nilai [i][j];
            if (nilai [i][j]<minimal)
            {
                minimal = nilai [i][j];
            }
            if (nilai [i][j]>maksimal)
            {
                maksimal = nilai [i][j];
            }
            rata2=total / (roti*data);      
        }        
    }    
}

void tampilan()
{
    garis ();
    cout << "\nSales for Products\n";
    garis ();
    cout << "\nProducts\tDay 1\tDay 2\tDay 3\tDay 4\n ";
    garis();
    cout <<"\n";
    for (int i = 0; i < roti; i++)
    {
        cout << namaroti[i]<<"\t";
        for (int j = 0; j < data; j++)
        {
            cout << nilai [i][j]<<"\t";
        }
        cout <<endl;
    }
    
}

int main ()
{
    inputan();
    tampilan();
    garis();
    cout << "\nMax Sales : "<<maksimal<<" Units"<<endl;
    cout << "Min Sales : "<<minimal<<" Units"<<endl;
    cout << "Average Sales : "<<rata2<<" Units"<<endl;
}