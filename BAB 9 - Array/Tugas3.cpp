#include <iostream>
using namespace std;
void garis();
int main(){
	int jml;
	cout<<"\tProgram Menambahkan Array\n";
	cout<<"Masukkan Banyak Data : ";cin>>jml;
	int nums[jml];
	for(int i=0;i<jml;i++){
		cout<<"Masukkan angka ke-"<<i+1<<" = ";cin>>nums[i];
	}
	garis();
	cout<<"Array sebelum ditambahkan\n";
	cout<<"[";
	for(int i=0;i<jml;i++){
		cout<<nums[i];
		if(i+1<jml)cout<<",";
	}
	cout<<"]\n";
	//melakukan penambahan array
	for(int i=0;i<jml;i++){
		nums[i] += nums[i-1];
	}
	garis();
	cout<<"Array setelah ditambahkan\n";
	cout<<"[";
	for(int i=0;i<jml;i++){
		cout<<nums[i];
		if(i+1<jml)cout<<",";
	}
	cout<<"]";
	return 0;
}
void garis(){
	cout<<"-------------------------------\n";
}
