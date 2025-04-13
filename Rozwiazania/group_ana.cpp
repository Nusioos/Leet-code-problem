#include<iostream>
#include<vector>
#include<map>
#include<string>
#include <unordered_set>
#include <unordered_map>
using namespace std;
int main()
{

    vector<string> strs={"eat","tea","tan","ate","nat","bat","a","a"}; 
 
    
unordered_multiset<string> set;
unordered_map<string, vector<string>> mapa;
 
    for(auto words : strs)
    {
   
     int count[26]={0};
     for( auto c : words)
     {
count[c - 'a']+=1;
     }
     string key = "#";
     for (int i = 0; i < 26; ++i) {
         key += to_string(count[i]) + "#"; 
     }
     mapa[key].push_back(words);
    }


      
    vector<vector<string>> result;
    for (auto& group : mapa) {
        result.push_back(group.second);
    }

    }
  
    






  
