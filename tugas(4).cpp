  //Nama : Asyifa amelia Purba Nim:240121086 
  //dibuat 24 okt2024
#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    const int maxData = 100;
    string namaBrng[maxData];
    int harga[maxData], jmlhJual[maxData];
    float totalHarga[maxData], diskon[maxData], totalBayar[maxData];
    int count = 0;
    char lagi;
    float totalPendapatan;

    do {
        cout << "\nPENJUALAN BARANG ELEKTRONIK\n";
        cout << "--------------------------------\n";

        cout << "Nama Brng: ";
        cin >> namaBrng[count];
        cout << "Harga: ";
        cin >> harga[count];
        cout << "Jmlh Jual: ";
        cin >> jmlhJual[count];

        totalHarga[count] = harga[count] * jmlhJual[count];
        diskon[count] = 0.10 * totalHarga[count];
        totalBayar[count] = totalHarga[count] - diskon[count];

        cout << "Total Harga: " << totalHarga[count] << endl;
        cout << "Diskon: " << diskon[count] << endl;
        cout << "Total Bayar: " << totalBayar[count] << endl;

        totalPendapatan += totalBayar[count];

        count++;

        if (count >= maxData) {
            cout << "Data penuh, tidak bisa input lagi.\n";
            cin >> lagi;
        }

        cout << "Apakah Mau Input Lagi [Y/T] = ";
        cin >> lagi;

    } while (lagi == 'y' || lagi == 'Y');

    cout << "\nTotal Pendapatan: " << totalPendapatan << endl;

    return 0;
}