#include<iostream>
using namespace std;
int main ()
{
    
    cout << "a. \n";
    char x,y;
    for (x='E' ; x>='A' ; x--)
    {
        y='E';
        while (y>=x)
        {
            cout << " " << y << " ";
            y--;
        }
        
    cout << endl;
    } 

    cout << " b. \n";
    int n = 5;
    int j = 0;
    for (int i = n; i >= 1; i--)
    {
        cout <<i;
        for (int j; j < n; j++)
        cout << "   ";
        for (int j = i; j <= 2*i-1; j++)
        {
            cout << i<<" ";
             cout << endl;
        }
    
    
        
    }
    
    
    return 0;
}
