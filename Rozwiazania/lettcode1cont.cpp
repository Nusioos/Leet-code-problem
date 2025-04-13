#include<iostream>
#include<vector>
#include<map>
#include<stack>
using namespace std;
int zad1(const string& tekst) {
    int wynik=0;
  
    for (int i=0;i<tekst.size();i++) {
   wynik+=(i+1)*(abs(123-tekst[i]));
    }

    
     return wynik;
   
 
 
  
}
int main()
{
    string s="zaza";
    int wyn;
    wyn=zad1(s);
    cout << wyn << endl;
}
