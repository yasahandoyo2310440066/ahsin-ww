#include <iostream>

using namespace std;

int main() {

	int data = 0;
	int jumlah = 0;
	int counter = 0;
	
	while (data != -1)
	{
		cout << "masukkan angka:";
		cin >> data;

		if (data == -1) {
			break;
		}
		jumlah += data;
		counter++;
	}
	cout << "jumlah semua data:" << jumlah << "\n";
	cout << "rata ratanya:" << (double)jumlah / counter;
}