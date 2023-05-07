#include <iostream>
#include <string>

std::string checkCodingScore(int codingScore) {
    if (codingScore > 80) {
        return "LOLOS";
    } else if (codingScore >= 60 && codingScore <= 80) {
        return "DIPERTIMBANGKAN";
    } else {
        return "GAGAL";
    }
}

std::string checkInterviewScore(const std::string& interviewScore) {
    if (interviewScore == "A" || interviewScore == "B") {
        return "LOLOS";
    } else {
        return "GAGAL";
    }
}

int main() {
    int codingScore;
    std::string interviewScore;
    
    std::cout << "Masukkan Nilai Coding: ";
    std::cin >> codingScore;
    std::cin.ignore();
    std::string codingResult = checkCodingScore(codingScore);

    std::cout << "Masukkan Nilai Interview: ";
    std::getline(std::cin, interviewScore);
    std::string interviewResult = checkInterviewScore(interviewScore);
    
    std::cout << "Hasil Nilai Coding: " << codingResult << std::endl;
    std::cout << "Hasil Nilai Interview: " << interviewResult << std::endl;
    
    if ((codingResult == "DIPERTIMBANGKAN" || codingResult == "LOLOS") && interviewResult == "LOLOS") {
        std::cout <<"Selamat Kamu Berhasil Menjadi Calon Programmer." << std::endl;
    } else {
        std::cout << "Maaf Kamu Belum Berhasil Menjadi Calon Programmer." << std::endl;
    }
    
    return 0;
}
