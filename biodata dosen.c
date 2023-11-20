#include <stdio.h>

// Definisi struktur untuk menyimpan biodata dosen
struct BiodataDosen {
    char nama[50];
    char jabatan[50];
    int umur;
};

int main() {
    // Mendeklarasikan variabel bertipe struct BiodataDosen
    struct BiodataDosen dosen;

    // Memasukkan data biodata dosen
    printf("Masukkan nama dosen: ");
    scanf("%s", dosen.nama);

    printf("Masukkan jabatan dosen: ");
    scanf("%s", dosen.jabatan);

    printf("Masukkan umur dosen: ");
    scanf("%d", &dosen.umur);

    // Menampilkan biodata dosen
    printf("\nBiodata Dosen:\n");
    printf("Nama: %s\n", dosen.nama);
    printf("Jabatan: %s\n", dosen.jabatan);
    printf("Umur: %d\n", dosen.umur);

    return 0;
}
