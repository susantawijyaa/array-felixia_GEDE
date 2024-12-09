#include <iostream>
using namespace std;

int main() {
    int angka [5] = {4, 2, 7, 1, 5};
    int array = 0;
    
      for (int i = 0; i < 5; i++) {
        cout << "Masukkan bilangan ke-"<< i <<" : ";
        cin >> angka [i];    
    }
    
    for (int i = 0; i < 5; i++){
        array += angka [i];
    }
    
     cout << "Jumlah elemen: " << array << endl;
     
    return 0;
}
