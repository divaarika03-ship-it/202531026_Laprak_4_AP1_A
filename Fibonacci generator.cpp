#include <iostream>
using namespace std;

int main() {
    int pilihan;

    do {
        cout << "=== FIBONACCI GENERATOR ===" << endl;
        cout << "1) n suku" << endl;
        cout << "2) sampai <= m" << endl;
        cout << "3) exit" << endl;
        cout << "Pilih: ";
        cin >> pilihan;

        // Menu 1: Fibonacci sebanyak n suku
        if (pilihan == 1) {
            int n;
            cout << "Masukkan n: ";
            cin >> n;

            if (n <= 0) {
                cout << "Input tidak valid!" << endl;
            } else {
                int a = 0, b = 1, c;
                cout << endl << "Hasil (" << n << " suku):" << endl;

                for (int i = 1; i <= n; i++) {
                    cout << a << " ";
                    c = a + b;
                    a = b;
                    b = c;
                }
                cout << endl;
            }
        }

        // Menu 2: Fibonacci sampai nilai maksimum m
        else if (pilihan == 2) {
            int m;
            cout << "Masukkan m: ";
            cin >> m;

            if (m < 0) {
                cout << "Input tidak valid!" << endl;
            } else {
                int a = 0, b = 1, c;
                cout << endl << "Hasil (<= " << m << "):" << endl;

                while (a <= m) {
                    cout << a << " ";
                    c = a + b;
                    a = b;
                    b = c;
                }
                cout << endl;
            }
        }

        // Menu 3: Exit
        else if (pilihan == 3) {
            cout << "Program selesai." << endl;
        }

        // Jika pilihan menu tidak sesuai
        else {
            cout << "Pilihan tidak valid!" << endl;
        }

        cout << endl;

    } while (pilihan != 3);

    return 0;
}
