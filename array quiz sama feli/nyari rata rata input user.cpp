#include <iostream>
using namespace std;

int main () {
    int nilai [5];
    int jumlah = 0;
    int rata_rata;
    cout << "masukan 5 angka yang akan dirata-ratakan" << endl;
    for (int i=0; i<5; i++) {
        cout <<"masukan angka ke "<< i+1 << ": ";
        cin >> nilai [i];
        jumlah += nilai[i];
    }

    for (int i=0; i<5; i++)
       rata_rata = jumlah / 5;

    cout << endl << "Rata-rata adalah: " << rata_rata << endl;

return 0;
}