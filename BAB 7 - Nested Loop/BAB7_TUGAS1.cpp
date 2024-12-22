#include <iostream>
using namespace std;
int main(){
	cout<<"a. \n";
	for(char a = 'E';a >= 'A';a--){
		for(char b = 'E';b>=a;b--)cout<<b<<"  ";
		cout<<endl;
	}
	cout<<"\nb. \n";
	int n = 5;
    for (int i = n; i >= 1; --i) {
        for (int j = 0; j < n - i; ++j)
            cout << "  ";
        for (int j = i; j <= 2 * i - 1; ++j)
            cout << i<<" ";
        cout << endl;
    }
    cout<<"\nc. \n";
    int baris = 5;
    int kolom = 5;
    for (int i = 1; i <= baris; ++i) {
        for (int j = 1; j <= kolom; ++j) {
            if (i == 1 || i == baris|| j == 1 || j == kolom)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    cout<<"\nd. \n";
    int m = 4;
    int hitung = 1;
    baris = 1;

    while (baris <= m) {
        kolom = 1;
        while (kolom <= baris) {
            cout << hitung << " ";
            ++hitung;
            ++kolom;
        }
        cout << endl;
        ++baris;
    }
return 0;
}
