#include <iostream>
using namespace std;

int main() {
  int number;

  // Pertama, Masukkan 4 digit bilangan angka
  cout << "Masukkan bilangan 4 digit: ";
  cin >> number;

  // Menambahkan 8 ke bilangan tersebut
  number += 8;

  // Membagi bilangan tersebut dengan 3
  number /= 3;

  // Mengambil modulus bilangan tersebut dengan 5
  int modulus = number % 5;

  // Mengalikan hasil modulus dengan 5
  int result = modulus * 5;

  // Menampilkan hasil akhir
  cout << "Hasilnya adalah: " << result << endl;

  return 0;
}

