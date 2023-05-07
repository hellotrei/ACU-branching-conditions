#include <iostream>
#include <string>

std::string checkCharacteristics(const std::string& name, int age, const std::string& shelter, double savings) {
    if (age > 40 && (shelter == "Nevada" || shelter == "New York" || shelter == "Havana") && savings > 10000000) {
        return "Don";
    } else if (age >= 25 && age <= 40 && (shelter == "New Jersey" || shelter == "Manhattan" || shelter == "Nevada") && savings >= 1000000 && savings <= 2000000) {
        return "Underworld boss";
    } else if (age >= 18 && age <= 24 && (shelter == "California" || shelter == "Detroit" || shelter == "Boston") && savings < 1000000) {
        return "Capo";
    }
    
    return "";
}

int main() {
    std::string name;
    int age;
    std::string shelter;
    double savings;
    
    std::cout << "Masukkan Nama: ";
    std::getline(std::cin, name);
    std::cout << "Masukkan Usia: ";
    std::cin >> age;
    std::cin.ignore();
    std::cout << "Msukkan Tempat Tingggal: ";
    std::getline(std::cin, shelter);
    std::cout << "Masukkan Tabungan ($): ";
    std::cin >> savings;
    std::cin.ignore();
    std::string rank = checkCharacteristics(name, age, shelter, savings);
    
    if (!rank.empty()) {
        std::cout << name << " kemungkinan adalah seorang anggota mafia dengan pangkat " << rank << ".\n";
    } else {
        std::cout << name << " tidak mencurigakan.\n";
    }
    
    return 0;
}
