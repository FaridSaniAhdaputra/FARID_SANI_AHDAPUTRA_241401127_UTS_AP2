#include <iostream>
using namespace std;

int main() {
    system("CLS");
    int kode1, kode2, kode3;
    cout << "kode ke-1 : "; cin >> kode1;
    cout << "kode ke-2 : "; cin >> kode2;
    cout << "kode ke-3 : "; cin >> kode3;
    
    int total = kode1 + kode2 + kode3;
    if (kode1 >= 50 && kode2 >= 50 && kode3 >= 50 && total >= 200)
    {
        cout << "Aman" << endl;
    } else {
        cout << "Bahaya" << endl;
    }    
    return 0;
}