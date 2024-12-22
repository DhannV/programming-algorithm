#include <iostream>
using namespace std;
int main()
{
    int pilihan;
    int harga = 0;
    cout << "---TIKET BIOSKOP ANONIM MALANG---\n\n";
    cout << "1. Film Uncharted\n";
    cout << "2. Film Morbius\n";
    cout << "3. Film Fantastic Beasts: The Secrets of Dumbledore\n";
    cout << "4. Film Black Adam\n";
    cout << "pilih Film (1 - 4) = ";
    cin >> pilihan;
    switch (pilihan)
    {
    case 1:
        cout << "\nFILM 1 TERPILIH ! TAYANG THEEATER 1\nharga tiket Rp.40.000\n";
        harga = 40000;
        break;
    case 2:
        cout << "\nFILM 2 TERPILIH ! TAYANG THEATER 2\nharga tiket Rp.35.000\n";
        harga = 35000;
        break;
    case 3:
        cout << "\nFILM 3 TERPILIH ! TAYANG THEATER 3\nharga tiket Rp.30.000\n";
        harga = 30000;
        break;
    case 4:
        cout << "\nFILM 4 TERPILIH ! TAYANG THEATER 4\nharga tiket Rp.50.000\n";
        harga = 50000;
        break;

    default:
        cout << "TIDAK ADA PILIHAN FILM";
        break;
    }

    int jumlah, pembayaran;
    cout << "\nmasukkan jumlah tiket yang diinginkan = ";
    cin >> jumlah;
    double ttlhrg = harga * jumlah;
    
    if( ttlhrg > 40000){
        double diskon = 0.08;
        double ttldsk = ttlhrg * diskon;
        ttlhrg -= ttldsk;
        cout << " anda mendapatkan diskon 8%\n";
        cout << "Harga tiket anda adalah : " << ttlhrg;
    }else{
        cout << "Harga tiket anda adalah : " << ttlhrg;

    }

        cout << "\npembayaran = ";
        cin >> pembayaran;
        cout << "kembalian =" << pembayaran - ttlhrg;
}