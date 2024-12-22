#include <iostream>
#include <string>
using namespace std;
int main(){
	int jml;
	cout<<"Masukan Banyak Data : ";cin >> jml;
	string nama[jml];
	int point[jml];
	for(int i = 0;i<jml;i++){
		cout<<"\nData ke-"<<i+1<<endl;
		cout<<"Masukan Nama  : ";cin>>nama[i];
		cout<<"Masukan Point : ";cin>>point[i];
	}
	cout<<"\n\nGrafik Data\n";
	cout<<"-----------------------------\n";
	for(int i = 0;i<jml;i++){
		cout<<"Data Ke "<<i+1<<" "<<nama[i]<<"\t: ";
		for(int j = 0;j<point[i];j++) {
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}

