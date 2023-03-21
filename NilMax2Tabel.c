/* Nama File    		: NilMax2Tabel */
/* Deskripsi    		: Menampilkan nilai maksimum ke-2 dari sebuah tabel T*/
/* Pembuat      		: Titah Mohamad Sahputra - 24060122120007 */
/* Tanggal Pembuatan	: 18 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int T[100]; // deklarasi tabel T dengan maksimal 100 elemen
    int n, max1, max2, i;

    printf("Masukkan jumlah elemen tabel T: ");
    scanf("%d", &n);

    printf("Masukkan elemen tabel T: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &T[i]);
    }

    max1 = T[0]; // asumsi nilai maksimum pertama adalah elemen pertama tabel
    max2 = T[0]; // asumsi nilai maksimum kedua adalah elemen pertama tabel

    for (i = 1; i < n; i++) {
        if (T[i] > max1) {
            max2 = max1; // update nilai maksimum kedua menjadi nilai maksimum pertama sebelumnya
            max1 = T[i]; // update nilai maksimum pertama menjadi elemen saat ini
        } else if (T[i] > max2 && T[i] != max1) {
            max2 = T[i]; // update nilai maksimum kedua jika elemen saat ini lebih besar dari nilai maksimum kedua sebelumnya dan tidak sama dengan nilai maksimum pertama
        }
    }

    printf("Nilai maksimum ke-2 adalah: %d\n", max2);

    return 0;
}
