#include <iostream>
using namespace std;

int main() {
  long long number, result = 0;
  int digit;

  // Pertama, Mamasukkan 6 digit bilangan angka
  cout << "Masukkan bilangan 6 digit: ";
  cin >> number;

  // Melakukan perulangan melalui digit-digit dari bilangan tersebut
  int place = 1;
  while (number > 0) {
    // Mengambil digit paling kanan
    digit = number % 10;

    // Menambahkan 2 ke digit tersebut
    digit += 2;

    // Menambahkan digit yang sudah diubah ke hasil akhir
    result += digit * place;

    // Pindah ke tempat selanjutnya
    place *= 10;

    // Menghapus digit paling kanan dari bilangan
    number /= 10;
  }

  // Menampilkan hasil akhir
  cout << "Hasilnya ialah: " << result << endl;

  return 0;
}
