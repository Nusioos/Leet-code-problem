#include<iostream>
#include<vector>
#include<map>
#include<stack>
using namespace std;
int main()
{
    vector<int> temperatures={73,74,75,71,69,72,76,73}; 
    vector<int> other(temperatures.size(), 0);
    stack<int> stak;

for(int i = 0; i < temperatures.size() ; i++)
{
   // cout << temperatures[i] << "temp" <<endl;
  //  cout <<  temperatures[i+1] << "temp +1" <<endl;
    while(!stak.empty() && temperatures[i]> temperatures[stak.top()])
    {
        int a = stak.top();
        stak.pop();
        other[a]=i-a;
      //  cout << i << endl;
    }
   
    stak.push(i);
}

for (auto const &grupa : other )
{
cout << grupa << " ";
}

}