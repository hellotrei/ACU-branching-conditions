#include <iostream>

int main() {
    int umur, tinggi;
    int tarif = 0;
    
    std::cout << "Masukkan umur anak: ";
    std::cin >> umur;
    
    if (umur < 1) {
        std::cout << "Dilarang masuk" << std::endl;
        return 0;
    } else if (umur < 3) {
        tarif = 30000;
        std::cout << "Masukkan tinggi anak (dalam cm): ";
        std::cin >> tinggi;
        if (tinggi > 70)
            tarif += 10000;
    } else if (umur < 7) {
        tarif = 40000;
        std::cout << "Masukkan tinggi anak (dalam cm): ";
        std::cin >> tinggi;
        if (tinggi > 120)
            tarif += 15000;
    } else if (umur < 10) {
        tarif = 50000;
        std::cout << "Masukkan tinggi anak (dalam cm): ";
        std::cin >> tinggi;
        if (tinggi > 150)
            tarif += 20000;
    } else {
        tarif = 80000;
    }
    
    std::cout << "Tarif harga: Rp " << tarif << std::endl;
    
    return 0;
}
