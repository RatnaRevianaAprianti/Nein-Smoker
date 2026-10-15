#include <iostream>
using namespace std;

int main() {
    // Deklarasi array 2 dimensi 4 baris x 3 kolom
    // (dari catatan: a[4][3])
    int a[4][3];

    // === INPUT ===
    // Nested loop untuk input (dari catatan di papan)
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    // === OUTPUT ===
    // Nested loop untuk output (dari catatan kanan papan)
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}