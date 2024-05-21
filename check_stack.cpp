#include <iostream>
#include <stack>

// Fungsi untuk mengecek apakah dua stack memiliki nilai yang sama
bool areStacksEqual(std::stack<int> stack1, std::stack<int> stack2) {
    // Jika ukuran kedua stack tidak sama, langsung return false
    if (stack1.size() != stack2.size()) {
        return false;
    }

    // Membandingkan setiap elemen dari kedua stack
    while (!stack1.empty() && !stack2.empty()) {
        // Bandingkan elemen teratas dari kedua stack, Jika ada elemen yang berbeda, return false
        if (stack1.top() != stack2.top()) {
            return false; 
        }
        stack1.pop(); // Hapus elemen teratas dari stack1
        stack2.pop(); // Hapus elemen teratas dari stack2
    }

    // Jika semua elemen sama, return true
    return true;
}

int main() {
    // Membuat dua stack
    std::stack<int> stack1;
    std::stack<int> stack2;

    // Mengisi stack pertama dengan nilai
    stack1.push(1);
    stack1.push(2);
    stack1.push(3);

    // Mengisi stack kedua dengan nilai yang sama dengan stack pertama
    stack2.push(1);
    stack2.push(1);
    stack2.push(3);

    // Mengecek apakah kedua stack memiliki nilai yang sama
    if (areStacksEqual(stack1, stack2)) {
        std::cout << "Stack 1 dan Stack 2 memiliki nilai yang sama." << std::endl;
    } else {
        std::cout << "Stack 1 dan Stack 2 tidak memiliki nilai yang sama." << std::endl;
    }

    return 0;
}
