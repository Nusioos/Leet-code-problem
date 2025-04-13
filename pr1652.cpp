#include <iostream>
#include<vector>
#include<unordered_set>
using namespace std;


int main()
{
    vector<int> code={10,5,7,7,3,2,10,3,6,9,1,6};
    vector<int> final;
    int k=-4;
   
    for (int i = 0; i < code.size()-1; i++) {
        cout << "[" << code[i] << "] ";
     }
     cout << endl;
for(int i=0;i<code.size();i++)
{
    int cur=k;
    int sum=0;
    if(cur>0)
    {
        while(cur>0)
        {    
    sum+=code[(i+cur)%(code.size())];
    cur--;
        }
    }
    else
    {
        while(cur<0)
        {    
    sum+=code[(abs(i-cur)+1)%(code.size())];
    cur++;
        }
    }
   
   
  
   final.push_back(sum);

}


for (int i = 0; i < final.size(); i++) {
   cout << "[" << final[i] << "] ";
}
}