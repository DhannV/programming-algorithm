#include <iostream>
using namespace std;
int main(){
	int jml,avg,sum=0,mhsMax,mhsMin;
	cout<<"Masukan Banyak Data = ";cin>>jml;
	int a[jml];
	for(int i = 0;i<jml;i++){
		cout<<"Tinggi badan Mahasiswa ke - "<<i+1<<" = ";cin>>a[i];
	}
	cout<<"\nData Tinggi Badan Mahasiswa Semester 1\n\n";
	for(int i = 0;i<jml;i++){
		cout<<"Tinggi Badan Mahasiswa ke - "<<i+1<<" : "<<a[i]<<endl;
	}
	cout<<endl;
	int max=a[0],min=a[0];
	for(int i = 1;i<jml;i++){
		if(a[i]>max) {
			max = a[i];
			mhsMax = i;
		}
    }
    for(int i = 1;i<jml;i++){
		if(a[i]<min) {
			min = a[i];
			mhsMin = i;
		}
    }
		
	for(int i = 0;i<jml;i++){
		   sum += a[i];
    }
	avg = sum / jml;
	cout<<"Tinggi Badan Tertinggi = "<<max<< " dari mhs ke-"<<mhsMax+1<<endl;
	cout<<"Tinggi Badan Terendah  = "<<min<< " dari mhs ke-"<<mhsMin+1<<endl;
	cout<<"Rata-Rata Tinggi Badan = "<<avg<<endl;
return 0;
}
