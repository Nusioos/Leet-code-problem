#include <iostream>
#include<unordered_set>
using namespace std;


int main()
{
    string s="";
    unordered_set<char> Set;
    int dl = 0;
    int reszta = 0;

    for (int r = 0; r < s.size(); r++) {
        while (Set.find(s[r]) != Set.end()) {
            Set.erase(s[dl]);
            dl++;
        }
        Set.insert(s[r]);
        reszta = max(reszta, r - dl+1);
    }
   
    cout << reszta << endl;
}