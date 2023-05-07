#include <iostream>

std::string getPosition(int number) {
    if (number % 2 == 0) {
        if (number >= 50 && number <= 100) {
            return “Captain”;
        } else {
            return "Target Attacker";
        }
    } else {
        if (number % 3 == 0 && number % 5 == 0) {
            return "Keeper";
        } else if (number > 90) {
            return "Playmaker";
        } else {
            return "Defender";
        }
    }
}

int main() {
    int number;
    
    std::cout << "Masukkan Nomor Punggung: ";
    std::cin >> number;
    
    std::string position = getPosition(number);
    
    std::cout << "Nomor Punggung: " << number << " digunakan untuk posisi: " << position << std::endl;
    
    return 0;
}
