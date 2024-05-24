#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

// Functie pentru a numara factorii primi
int numarFactori(int n, int factor) {
    int numar = 0;
    while (n >= factor) {
        numar += n / factor;
        n /= factor;
    }
    return numar;
}

int main() {
    int n;
    cout << "Introduceti un numar natural n: ";
    cin >> n;

    // Calculam numarul de factori 3 si 5 in n!
    int numar_factori_3 = numarFactori(n, 3);
    int numar_factori_5 = numarFactori(n, 5);

    // Calculam valoarea maxima a lui p
    int p_max = min(numar_factori_3 / 2, numar_factori_5);

    // Scriem rezultatul in fisierul bac.txt
    ofstream fout("bac.txt");
    fout << p_max;
    fout.close();

    cout << "Valoarea maxima a lui p este: " << p_max << endl;

    return 0;
}
