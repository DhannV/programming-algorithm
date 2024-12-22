#include <iostream>
using namespace std;
void garis();
void daftar();
char grade(int nilai);
int main(){
	int jml;
	cout<<"Masukan Jumlah Mahasiswa : ";cin >> jml;
	cout<<endl;
	string nama[jml],nim[jml];
	int nilai[jml];
	for(int i=0;i<jml;i++){
		cout<<"Mahasiswa ke-"<<i+1<<endl;
		cout<<"Masukan Nama  : ";cin>>nama[i];
		cout<<"Masukan NIM   : ";cin>>nim[i];
		cout<<"Masukan Nilai : ";cin>>nilai[i];
		cout<<endl;
	}
	daftar();
	for(int i=0;i<jml;i++){
		cout<<i+1;
		cout<<"\t"<<nim[i];
		cout<<"\t"<<nama[i];
		cout<<"\t"<<nilai[i];
		cout<<"\t"<<grade(nilai[i])<<"\n\n";
	}
	return 0;
}

void garis(){
	for(int i = 0;i<20;i++) cout<<"-";
	cout<<endl;
}
void daftar(){
	cout<<"\n\n\tDAFTAR NILAI MAHASIWA\n\n";
	garis();
	cout<<"no\tNIM\tNama\tNilai\tGrade\n";
	garis();
}

char grade(int nilai){
	char hasil;
	if(nilai>79){
		hasil = 'A';
	}else if(nilai > 59){
		hasil = 'B';
	}else if(nilai > 39){
		hasil = 'C';
	}else if(nilai > 29){
		hasil = 'D';
	}else {
		hasil = 'E';
	}
	return hasil;
}
