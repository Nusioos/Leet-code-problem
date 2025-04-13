#include<iostream>
#include<vector>
#include<map>
#include<stack>
#include<algorithm>
using namespace std;


int maximizeActiveSections(string s) {
    // Dodajemy '1' na początku i końcu, by nie przejmować się końcami
    s = "1" + s + "1";

    // Zmienna przechowująca liczbę sekcji '1' w oryginalnym ciągu
    int activeSections = 0;
    vector<int> zeroGroups; // Długości grup '0'

    int zeroCount = 0;  // Licznik grup '0'
    int oneCount = 0;   // Licznik grup '1'

    // Przechodzimy przez ciąg i liczymy grupy '0' oraz '1'
    for (size_t i = 1; i < s.size() - 1; i++) {
        if (s[i] == '0') {
            zeroCount++;
            if (oneCount > 0) {
                activeSections++;  // Zliczamy sekcje '1'
                oneCount = 0;
            }
        } else {
            if (zeroCount > 0) {
                zeroGroups.push_back(zeroCount);  // Zapisujemy grupy '0'
                zeroCount = 0;
            }
            if (s[i - 1] == '0') {
                activeSections++;  // Zliczamy sekcje '1'
            }
            oneCount++;
        }
    }
    if (oneCount > 0) activeSections++; // Zliczamy ostatnią grupę '1'

    // Jeśli nie ma żadnych '0', nie ma czego zmieniać
    if (zeroGroups.empty()) return activeSections;

    // Początkowy wynik
    int maxSections = activeSections;

    // Teraz przechodzimy przez grupy '0' i próbujemy je zamienić na '1'
    for (size_t i = 0; i < zeroGroups.size(); i++) {
        // Zamieniamy grupę '0' na '1', ale tylko jeśli przed nią i po niej są '1'
        if (i > 0 && i < zeroGroups.size() - 1) {
            // Jeśli grupy '1' przed i po grupie '0' są dostępne, połączymy je
            maxSections = max(maxSections, activeSections + zeroGroups[i] + 2);
        } else {
            // W przeciwnym razie zamiana daje tylko jedno połączenie
            maxSections = max(maxSections, activeSections + zeroGroups[i] + 1);
        }
    }

    return maxSections;
}

int main() {
    string s;
    cin >> s;
    cout << maximizeActiveSections(s) << endl;
    return 0;
}