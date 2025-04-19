#include <iostream>
using namespace std;

int main() {
    system("CLS");  
    int kode;  
    cout << "Masukkan kode 3 digit: "; cin >> kode;
    if (kode < 100 || kode > 999) {
        cout << "Kode Salah!" << endl;
        return 0;
    }
    int digit1 = kode / 100;      
    int digit2 = (kode / 10) % 10; 
    int digit3 = kode % 10;          
    int total = digit1 + digit2 + digit3;   
    
    cout << "Jumlah digit : " << total << endl;
    return 0;
}