#include <iostream>
using namespace std;
int main ()
{
    const double BOBOT_KEHADIRAN = 0.10;
    const double BOBOT_MINGGUAN = 0.45;
    const double BOBOT_UTS = 0.25;
    const double BOBOT_UAS = 0.20;
    
    double kehadiran, mingguan, uts, uas;
    double nilai_akhir;

    cout << "Masukkan nilai kehadiran: ";
    cin >> kehadiran;

    cout << "Masukkan nilai mingguan: ";
    cin >> mingguan;

    cout << "Masukkan nilai UTS: ";
    cin >> uts;

    cout << "Masukkan nilai UAS: ";
    cin >> uas;

    nilai_akhir = kehadiran * BOBOT_KEHADIRAN
                + mingguan * BOBOT_MINGGUAN
                + uts * BOBOT_UTS
                + uas * BOBOT_UAS;

    double rerata_polos = (kehadiran + mingguan + uts + uas) / 4.0;

    cout << "Nama          : Akhmad athailah\n";
    cout << "NPM           : 2510020046\n";
    cout << "Nilai akhir   : " << nilai_akhir << "\n";
    cout << "Rerata polos  : " << rerata_polos << "\n";

    return 0;
}