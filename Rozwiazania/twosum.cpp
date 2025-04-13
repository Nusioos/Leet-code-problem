#include<iostream>
#include<vector>
#include<map>

using namespace std;
int main()
{

    struct something
{
    vector<int> nums={1,2,3,4,2};
};
vector<int> final;
  int target=4;
  map<int,something> mapa;
  mapa[1]=something();


  for (const auto& pair : mapa) {
    for (int num : pair.second.nums) {

        for (int num_2 : pair.second.nums) {
        if(num+num_2==target)
        {
            //cout << num << "  +  "<<num_2 << "to ta wartosc dodana daje target" <<  endl;
            final.push_back(num);
            final.push_back(num_2);
            goto aa;
        }
        }
    }
  }
  aa:
// return final;
  
}