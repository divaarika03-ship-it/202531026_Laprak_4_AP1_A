#include <iostream>
using namespace std;

int main() {
    int n;              
    int uang;           
    int total = 0;      
    int i = 1;          

    cout << "Masukkan jumlah hari: ";
    cin >> n;

    while (i <= n) {
        cout << "Uang saku hari ke-" << i << ": ";
        cin >> uang;

        total += uang;

        i++;
    }

    cout << endl;
    cout << "Total: " << total << endl;

    return 0;
}
