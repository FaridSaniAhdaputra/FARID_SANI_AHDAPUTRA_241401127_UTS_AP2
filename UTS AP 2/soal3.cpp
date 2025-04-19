#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    system("CLS");
    string nama, nim;
    int nilai_matkul1, nilai_matkul2, nilai_matkul3;
    float rata_rata_nilai;

    cout << "Nama Mahasiswa : " ; getline(cin, nama);
    cout << "NIM            : " ; getline(cin, nim);
    cout << "Masukan Nilai Mata kuliah " << endl;
    cout << " Algaritma dan  pemrograman  : " ; cin >> nilai_matkul1;
    cout << " probabilitas dan statistika : " ; cin >> nilai_matkul2;
    cout << " Sistem Operasi              : " ; cin >> nilai_matkul3;
    cout << endl;

    cout << "algaritma dan pemrograman   : " ;
    if (nilai_matkul1 >= 60) {
        cout << "Lulus" << endl;
    } else {
        cout << "Tidak Lulus, Silahkan ulangi di Tahun Depan!" << endl;
    }
    cout << "probabilitas dan statistika : " ;
    if (nilai_matkul2 >= 60) {
        cout << "Lulus" << endl;
    } else {
        cout << "Tidak Lulus, Silahkan ulangi di Tahun Depan!" << endl;
    }
    cout << "Sistem Operasi : " ;
    if (nilai_matkul3 >= 60) {
        cout << "Lulus" << endl;
    } else {
        cout << "Tidak Lulus, Silahkan ulangi di Tahun Depan!" << endl;
    }
    rata_rata_nilai = (nilai_matkul1 + nilai_matkul2 + nilai_matkul3) / 3.0;
    cout << fixed << setprecision(2) << "Nilai rata rata semester ini : " << rata_rata_nilai << endl;

     return 0;
}