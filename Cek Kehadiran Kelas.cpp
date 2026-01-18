#include <iostream>
using namespace std;

int main() {
    int n;
    int hadir = 0, tidakHadir = 0;
    int status;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Mahasiswa " << i << " (1=hadir, 0=tidak): ";
        cin >> status;

        if (status == 1) {
            hadir++;
        } else if (status == 0) {
            tidakHadir++;
        } else {
   			 cout << "Input tidak valid! Masukkan 1 atau 0.\n";
            i--; // ulangi input untuk mahasiswa yang sama
        }
    }

    double persentaseHadir = (double)hadir / n * 100;

    cout << "\nHadir: " << hadir << endl;
    cout << "Tidak hadir: " << tidakHadir << endl;
    cout << "Persentase hadir: " << persentaseHadir << "%" << endl;

    return 0;
}	
