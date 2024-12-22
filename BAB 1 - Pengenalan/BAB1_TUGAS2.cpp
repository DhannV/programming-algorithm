 #include <iostream>
using namespace std ;
int main (){

string Nama, NIM;
char Kelas;
float ip;
int smstr;
cout<<"\t\tBAB 1 TUGAS 2\t\t\n\n";
cout<<"masukkan Nama Anda\t\t:";
cin>>Nama;
cout<<"masukkan NIM Anda\t\t:";
cin>>NIM;
cout<<"masukkan Kelas Anda\t\t:";
cin>>Kelas;
cout<<"masukkan Semester Anda\t\t:";
cin>>smstr;
cout<<"masukkan Nilai IP Semester\t:";
cin>>ip;
cout<<"\n\n\t\tBERIKUT DATA ANDA\t\t\n\n";
cout<<"Nama\t\t\t:"<<Nama<<endl;
cout<<"NIM\t\t\t:"<<NIM<<endl;
cout<<"Kelas\t\t\t:"<<Kelas<<endl;
cout<<"Semester\t\t:"<<smstr<<endl;
cout<<"Nilai IP Semester\t:"<<ip<<endl;
return 0;
}