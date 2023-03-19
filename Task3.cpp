#include <iostream>
using namespace std;

int main() {
  int number, sum = 0;

  // Pertama, Masukkan bilangan 4 digit
  cout << "Masukkan bilangan 4 digit: ";
  cin >> number;

  // Menghitung jumlah digit
  int digit;
  for (int i = 0; i < 4; i++) {
    digit = number % 10;  // Mengambil digit paling kanan
    sum += digit;         // Menambahkan digit ke variabel sum
    number /= 10;         // Menghapus digit paling kanan
  }

  // Menampilkan hasil
  cout << "Hasilnya ialah: " << sum << endl;

  return 0;
}
