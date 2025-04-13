#include<iostream>
#include<vector>
#include<map>
#include<string>
#include <unordered_set>
#include <unordered_map>

using namespace std;
int main()
{
  
    vector<int> nums={1,1,1,2,2,3};
   /// vector<int> nums={  -1,-1};
vector<int> final;
int k=2;
  
   unordered_map<int,int> mapa;
int freq=0;

int max=0;
   for (auto num : nums) {
        mapa[num]++;
    }
    
    vector<pair<int,int>> frequencyArray; 
    for (const auto& gr : mapa) {
        frequencyArray.push_back({gr.second, gr.first});
    }

    for (auto pair : frequencyArray) {
if(pair.second>=freq)
{
    freq=pair.first;
}
        cout << "Liczba " << pair.second << " występuje " << pair.first << " razy." << endl;

   
    }
    for (int i = 0; i < k; ++i) {
        final.push_back(frequencyArray[i].second); 
   cout << frequencyArray[i].second  <<endl;
    }




}