#include <iomanip>
#include <iostream>

int main() {
    int tugas = 80;
    int uts = 75;
    int uas = 90;

    // TODO 1: hitung jumlah ketiga nilai.
    int jumlah = tugas + uts + uas;

    // TODO 2: hitung rata-rata.
    double rerata = jumlah / 3.0;

    // TODO 3: cetak hasil dengan dua angka di belakang koma.
    std::cout << "Jumlah : " << jumlah << "\n";
    std::cout << "Rata-rata : " << std::fixed << std::setprecision(2) << rerata << "\n";

    return 0;
}