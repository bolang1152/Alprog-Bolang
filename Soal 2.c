#include <stdio.h>
#include <string.h>

void bandingkan_string(const char* teks1, const char* teks2) {
    int panjang1 = strlen(teks1);
    int panjang2 = strlen(teks2);

    if (panjang1 != panjang2) {
        printf("BERBEDA\n");
    } else {
        int hasil = strcmp(teks1, teks2);
        if (hasil == 0) {
            printf("IDENTIK\n");
        } else {
            printf("MIRIP\n");
        }
    }
}

int main() {
    char input1[101];
    char input2[101];

    fgets(input1, sizeof(input1), stdin);
    input1[strcspn(input1, "\n")] = '\0';

    fgets(input2, sizeof(input2), stdin);
    input2[strcspn(input2, "\n")] = '\0';

    bandingkan_string(input1, input2);

    return 0;
}