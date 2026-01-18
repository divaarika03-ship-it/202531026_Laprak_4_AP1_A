#include <iostream>
using namespace std;

int main() {
    int harga;              
    int jumlahBarang = 0;   
    int total = 0;          
    int diskon = 0;         
    int totalBayar;         

    cout << "=== Belanja Minimarket ===" << endl;
    cout << "Masukkan harga barang (0 untuk selesai):" << endl;

    while (true) {
        cout << "Harga: ";
        cin >> harga;

        if (harga == 0) {
            break;
        }

        total += harga;
        jumlahBarang++;
    }

    if (total >= 100000) {
        diskon = total * 0.10;
    }

    totalBayar = total - diskon;

    // Menampilkan hasil
    cout << endl;
    cout << "Jumlah barang: " << jumlahBarang << endl;
    cout << "Total sebelum diskon: " << total << endl;
    cout << "Diskon: " << diskon << endl;
    cout << "Total bayar: " << totalBayar << endl;

    return 0;
}
