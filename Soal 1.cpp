#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int jumlahElemen;  
    int nilaiTukar = 0;  

    scanf("%d", &jumlahElemen);
    int nilai[jumlahElemen];

    for (int i = 0; i < jumlahElemen; i++) {
        scanf("%d", &nilai[i]);
    }

    for (int i = 0; i < jumlahElemen - 1; i++) {
        for (int j = 0; j < jumlahElemen - i - 1; j++) {
            if (nilai[j + 1] < nilai[j]) {
                // Menukar elemen
                nilaiTukar = nilai[j + 1];
                nilai[j + 1] = nilai[j];
                nilai[j] = nilaiTukar;
            }
        }
    }

    for (int i = 0; i < jumlahElemen; i++) {
        printf("%d\n", nilai[i]);  
    }

    return 0;
}