#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> prices={7,1,5,3,6,4};
    int point_B=0;
    int point_S=1;
    int maximum =0;

   while(point_S < prices.size())
    {
   if(prices[point_B]<prices[point_S])
   {
    maximum= max(maximum,prices[point_S]-prices[point_B]);
   }
else
{
    point_B=point_S;
}
point_S++;
   }

   cout << " wynik: " << maximum << endl; 
    }



 