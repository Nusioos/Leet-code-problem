#include<iostream>
#include<vector>
#include<map>
#include <unordered_set>
using namespace std;

int main()
{

    string anagram_1="aacc";
    string anagram_2= "ccac";
    
if(anagram_1.size()!=anagram_2.size())
{

  return false;
}
unordered_multiset<char> seen;  
unordered_multiset<char> seen_2;  
for (int i = 0; i < anagram_1.size() ; i++)
{
    seen.insert(anagram_1[i]);

}
for (int i = 0; i < anagram_2.size() ; i++)
{
    seen_2.insert(anagram_2[i]);
 
}

if(seen==seen_2)
{
  return true;
  cout << "true" << endl;
}
else
{
    return false;
  cout << "false" << endl;
}

  
}

