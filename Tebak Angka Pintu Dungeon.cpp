#include <iostream>
using namespace std;

int main(){
	int koderahasia = 7;
	int tebak;
	int percobaan = 1;
	
	cout << "=== pintu dungeon ===" << endl;
	
	while (percobaan <=3) {
		cout << "percobaan" << percobaan << "/3 - tebak: ";
		cin >> tebak;
		
		if (tebak == koderahasia) {
			cout << "Benar!" << endl;
			return 0;
		}
		else {
			cout << "Salah!" << endl;
		}
		percobaan++;
	}
	cout << "Kalah! Angka =" << koderahasia << endl;
	
	return 0;
}
