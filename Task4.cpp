#include <iostream>
#include <string>
#include <cstdio> 

using namespace std;

string formatTime(int seconds) {
    int hours, minutes, secs;
    char timeString[9]; // String untuk menyimpan hasil

    // Menghitung jumlah jam, menit, dan detik
    hours = seconds / 3600;
    seconds = seconds % 3600;
    minutes = seconds / 60;
    seconds = seconds % 60;
    secs = seconds;

    // Mengatur format string menggunakan sprintf()
    sprintf(timeString, "%02d:%02d:%02d", hours, minutes, secs);

    return string(timeString); // Mengubah C-style string menjadi string standar C++
}

int main() {
    int seconds;

    // Masukkan waktu dalam detik
    cout << "Masukkan waktu dalam detik: ";
    cin >> seconds;

    // Memanggil fungsi formatTime() untuk mengubahnya menjadi format "HH:MM:SS"
    string formattedTime = formatTime(seconds);

    // Menampilkan hasil 
    cout << "Waktu pada format HH:MM:SS: " << formattedTime << endl;

    return 0;
}
