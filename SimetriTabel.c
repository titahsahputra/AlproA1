/* Nama File    		: SimetriTabel */
/* Deskripsi    		: Menentukan apakah T1 dan T2 simetri atau tidak */
/* Pembuat      		: Titah Mohamad Sahputra - 24060122120007 */
/* Tanggal Pembuatan	: 18 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int main() {
    int T1[MAX_SIZE], T2[MAX_SIZE];
    int n1, n2, i, isSymmetric;

    printf("Masukkan ukuran T1: ");
    scanf("%d", &n1);


    printf("Masukkan ukuran T2: ");
    scanf("%d", &n2);

    isSymmetric = 1; // diasumsikan simetri
    if (n1 != n2) {
        isSymmetric = 0; // jika ukuran tidak sama maka tidak simetri
    } else {
        printf("Masukkan elemen T1: ");
        for (i = 0; i < n1; i++) {
            scanf("%d", &T1[i]);
        }

        printf("Masukkan elemen T2: ");
        for (i = 0; i < n2; i++) {
            scanf("%d", &T2[i]);
        }

        for (i = 0; i < n1; i++) {
            if (T1[i] != T2[i]) {
                isSymmetric = 0; // jika nilai pada elemen berbeda maka tidak simetri
                break;
            }
        }
    }

    if (isSymmetric) {
        printf("T1 dan T2 simetri.\n");
    } else {
        printf("T1 dan T2 tidak simetri.\n");
    }

    return 0;
}
