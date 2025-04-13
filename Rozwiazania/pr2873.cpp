#include <iostream>
#include<vector>
using namespace std;

int main()
{
vector<int> nums={1,10,3,4,19};

long long max=0;
long long max2=0;
long long zap;
if(nums.size()==3  && (nums[1]-nums[0])>=0)
{
    max=nums[0]-nums[1];
    max2=nums[2];  
    goto aa;
}


for(int i=0;i<nums.size();i++)
{
    
    for(int j=0;j<nums.size();j++)
    {
          if(i!=j && i<j)
      {
        {
            if(nums[i]-nums[j]>=max)
            {
max=nums[i]-nums[j];
            }
        }
      }
       for(int k=0;k<nums.size();k++) 
        {
         if(k!=j && k>j)
      {
        {
            if(max* nums[k]>max2)
            {
              
 max2=max* nums[k];
 
 cout << max2 << "max2 "<< nums[k] << "<---k" << endl;  
            }
        }
      }


        }
    }
}
aa:



cout << max << endl;
cout << max2 << endl;

}