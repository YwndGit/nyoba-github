#include <stdio.h>

// ini kalimat github
int main () {
    char kalimat[40];
    printf("Masukkan sebuah kalimat: ");
    scanf("%39[^\n]", kalimat); // Membaca kalimat hingga newline atau batas 39 karakter
    printf("Kalimat yang Anda masukkan: %s\n", kalimat);
    return 0;
}