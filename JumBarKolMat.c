/* Nama File    		: JumBarKolMat */
/* Deskripsi    		: Menjumlahkan semua elemen pada baris dan kolom dalam tabel T*/
/* Pembuat      		: Titah Mohamad Sahputra - 24060122120007 */
/* Tanggal Pembuatan	: 18 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int T[100][100]; // asumsi tabel T memiliki maksimum 100 baris dan 100 kolom
    int n, m; // ukuran tabel T

    // input ukuran tabel T
    printf("Masukkan jumlah baris tabel T: ");
    scanf("%d", &n);
    printf("Masukkan jumlah kolom tabel T: ");
    scanf("%d", &m);

    // input elemen tabel T
    printf("Masukkan elemen tabel T:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &T[i][j]);
        }
    }

    // menghitung jumlah setiap baris
    printf("Jumlah setiap baris:\n");
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            sum += T[i][j];
        }
        printf("%d\n", sum);
    }

    // menghitung jumlah setiap kolom
    printf("Jumlah setiap kolom:\n");
    for (int j = 0; j < m; j++) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += T[i][j];
        }
        printf("%d ", sum);
    }

    return 0;
}
