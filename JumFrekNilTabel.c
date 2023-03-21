/* Nama File    		: JumFrekNilTabel */
/* Deskripsi    		: Menampilkan jumlah nilai-nilai elemen tabel T yang frekuensi kemunculannya lebih dari satu kali*/
/* Pembuat      		: Titah Mohamad Sahputra - 24060122120007 */
/* Tanggal Pembuatan	: 18 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int T[100]; // deklarasi tabel T dengan maksimal 100 elemen
    int n, i, j, count, sum = 0;

    printf("Masukkan jumlah elemen tabel T: ");
    scanf("%d", &n);

    printf("Masukkan elemen tabel T: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &T[i]);
    }

    printf("Jumlah nilai-nilai elemen tabel T yang frekuensi kemunculannya lebih dari satu kali adalah: ");
    for (i = 0; i < n; i++) {
        count = 0; // inisialisasi variabel count untuk menghitung frekuensi kemunculan elemen

        // hitung frekuensi kemunculan elemen i pada tabel T
        for (j = 0; j < n; j++) {
            if (T[j] == T[i]) {
                count++;
            }
        }

        // jika frekuensi kemunculan lebih dari satu kali dan elemen belum dicetak sebelumnya
        if (count > 1) {
            for (j = 0; j < i; j++) {
                if (T[j] == T[i]) {
                    break; // jika elemen sudah dicetak sebelumnya, keluar dari loop
                }
            }
            if (j == i) { // jika elemen belum dicetak sebelumnya, tambahkan nilai elemen ke variabel sum
                sum += T[i];
            }
        }
    }
    printf("%d\n", sum);

    return 0;
}
