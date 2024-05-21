#include <iostream>
#include <string>
#include <sstream>
#include <map>

int main() {
    // Daftar menu dan harga
    std::map<std::string, int> menu = {
        {"Soto", 15000},
        {"Rawon", 20000},
        {"Pecel", 10000},
        {"Bakso", 12500},
        {"Siomay", 25000}
    };
    
    // Variabel untuk menyimpan input dari pengguna
    std::string input;
    std::cout << "Isikan Makanan yang dipesan : ";
    std::getline(std::cin, input);
    
    // Mengolah input
    std::stringstream ss(input);
    std::string makanan;
    int porsi;
    int totalHarga = 0;

    // Output rincian pesanan
    std::cout << "Total Harga :" << std::endl;

    while (ss >> makanan >> porsi) {
        if (menu.find(makanan) != menu.end()) {
            int hargaSatuan = menu[makanan];
            int total = hargaSatuan * porsi;
            totalHarga += total;
            std::cout << "\xfb " << makanan << " Rp." << hargaSatuan << " * " << porsi << " = " << "Rp." << total << std::endl;
        } else {
            std::cout << "Makanan " << makanan << " tidak ditemukan dalam menu." << std::endl;
        }
    }

    std::cout << "Total = " << totalHarga << std::endl;

    return 0;
}
