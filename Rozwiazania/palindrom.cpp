#include <iostream>
#include <vector>

using namespace std;

// Funkcja do mno�enia macierzy przez wektor
vector<double> matVecMultiply(const vector<vector<double>>& mat, const vector<double>& vec) {
    int rows = mat.size();
    int cols = mat[0].size();

    if (cols != vec.size()) {
        cerr << "B��d: Niepoprawny rozmiar macierzy i wektora!" << endl;
        return {};  // Zwr�cenie pustego wektora w przypadku b��du
    }

    vector<double> result(rows, 0.0);  // Wektor wynikowy
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i] += mat[i][j] * vec[j];  // Suma iloczyn�w
        }
    }

    return result;
}

int main() {
    int m, n;

    // Wprowadzenie rozmiaru macierzy
    cout << "Podaj liczb� wierszy macierzy: ";
    cin >> m;
    cout << "Podaj liczb� kolumn macierzy: ";
    cin >> n;

    vector<vector<double>> mat(m, vector<double>(n));

    // Wprowadzenie element�w macierzy
    cout << "Podaj elementy macierzy (" << m << "x" << n << "):" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "A[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> mat[i][j];
        }
    }

    // Wprowadzenie wektora
    vector<double> vec(n);  // D�ugo�� wektora musi by� r�wna liczbie kolumn w macierzy
    cout << "Podaj elementy wektora (d�ugo�� " << n << "):" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "v[" << i + 1 << "]: ";
        cin >> vec[i];
    }

    // Mno�enie macierzy przez wektor
    vector<double> result = matVecMultiply(mat, vec);

    // Wy�wietlanie wyniku
    if (!result.empty()) {
        cout << "Wynik mno�enia macierzy przez wektor:" << endl;
        for (double val : result) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}

