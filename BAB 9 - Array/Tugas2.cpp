#include <iostream>
using namespace std;
int main(){
	int ruangan,pasien;
	cout<<"Masukan Jumlah Ruangan : ";cin>>ruangan;
	cout<<"Masukan Jumlah Pasien  : ";cin>>pasien;
	int sistolik[ruangan][pasien],diastolik[ruangan][pasien];
	string nama[ruangan][pasien];
	for(int i=0;i<ruangan;i++){
		cout<<"\t\tData Ruangan Ke-"<<i+1<<endl;
		cout<<"--------------------------------------------------------\n";
		for(int j=0;j<pasien;j++){
			cout<<"--------------------------------------------------------\n";
			cout<<"\t\tPasien Ke-"<<j+1<<endl;
			cout<<"Nama pasien : ";cin>>nama[i][j];
			cout<<"Tekanan Darah sistolik  : ";cin>>sistolik[i][j];
			cout<<"Tekanan Darah diastolik : ";cin>>diastolik[i][j];
		}
	}
	cout<<"\n\t\t---- OUTPUT DATA PASIEN ----\n";
	cout<<"--------------------------------------------------------\n";
	cout<<"No\tNama\tSistolik\tDiastolik\tStatus\n";
	cout<<"--------------------------------------------------------\n";
	for(int i=0;i<ruangan;i++){
		cout<<"Data Ruang Ke-"<<i+1<<endl;
		for(int j=0;j<pasien;j++){
			cout<<"--------------------------------------------------------\n";
			cout<<j+1<<"\t"<<nama[i][j];
			cout<<"\t"<<sistolik[i][j]<<"mmHg\t\t"<<diastolik[i][j]<<"mmHg\t\t";
	        if((sistolik[i][j] > 140) && (diastolik[i][j] > 80)) cout<<"Hipertensi";
	        else if((sistolik[i][j] < 90) && (diastolik[i][j] < 60)) cout<<"Hipotensi";
        	else if((sistolik[i][j] <= 140 ) && (diastolik[i][j] >=60)) cout<<"Normal";
        	else cout<<" ";
		}
	}
	return 0;
}
