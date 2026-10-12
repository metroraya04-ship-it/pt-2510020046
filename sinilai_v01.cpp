#include <iostream>
#include <string>
using namespace std;

int main () {
    string Nama;
    string NPM;
    double Kehadiran = 0;
    double Mingguan = 0;
    double UTS = 0;
    double UAS = 0;

    cout << "=== SINilai v01 ===" << endl;

    cout << "Nama       : ";
    getline(cin, Nama);

    cout << "NPM        : ";
    cin >> NPM;

    cout << "Kehadiran  : ";
    cin >> Kehadiran;

    cout << "Mingguan   : ";
    cin >> Mingguan;

    cout << "UTS        : ";
    cin >> UTS;

    cout << "UAS        : ";
    cin >> UAS;


     cout << endl;
    cout << "--- Kartu Data Mahasiswa ---" << endl;

    cout << "Nama       : " << Nama << endl;
    cout << "NPM        : " << NPM << endl;
    cout << "Kehadiran  : " << Kehadiran << endl;
    cout << "Mingguan   : " << Mingguan << endl;
    cout << "UTS        : " << UTS << endl;
    cout << "UAS        : " << UAS << endl;

    return 0;
}