#include <iostream>

int main() {
    int lariWaktu, pushUpWaktu, plankWaktu;
    
    std::cout << "Masukkan waktu olahraga lari (dalam menit): ";
    std::cin >> lariWaktu;
    
    std::cout << "Masukkan waktu olahraga push-up (dalam menit): ";
    std::cin >> pushUpWaktu;
    
    std::cout << "Masukkan waktu olahraga plank (dalam menit): ";
    std::cin >> plankWaktu;
    
    int lariKalori = (lariWaktu / 5) * 60;
    int pushUpKalori = (pushUpWaktu / 30) * 200;
    int plankKalori = plankWaktu * 5;
    
    int totalKalori = lariKalori + pushUpKalori + plankKalori;
    
    std::cout << "Jumlah kalori yang terbakar: " << totalKalori << " kalori" << std::endl;
    
    return 0;
}
