#include <iostream>
using namespace std;

int main () {
    int nilai [5] = {5, 10, 15, 20, 25};
    int jumlah = 0;
    int rata_rata;
    
    for (int i=0; i<5; i++) {
        jumlah += nilai[i];
    }

    for (int i=0; i<5; i++)
       rata_rata = jumlah / 5;

    cout << endl << "Rata-rata adalah: " << rata_rata << endl;

return 0;
}