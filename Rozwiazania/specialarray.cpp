#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> nums={1};

    bool sigma =true;
for(int i=0;i<nums.size()-1;i++)
{
   if( (nums[i]%2==0 &&nums[i+1]%2==1) || (nums[i]%2==1 &&nums[i+1]%2==0)  )
   {
    sigma = true;
    cout << nums[i] << "<--i " << nums[i+1] <<"<--i+1" << endl;
   }
   else
   {
   sigma= false;
   
   cout << nums[i] << "<--i false " << nums[i+1] <<"<--i+1 false" << endl;
   goto aa;
   }
}
aa:
cout << sigma << "<----" << endl;
}