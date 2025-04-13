#include <iostream>
#include<vector>
using namespace std;
void dfs(const vector<int>& nums, int i, vector<int>& subset, vector<vector<int>>& res) {
    if (i >= nums.size()) {
        res.push_back(subset);
        return;
    }
    subset.push_back(nums[i]);
    dfs(nums, i + 1, subset, res);
    subset.pop_back();
    dfs(nums, i + 1, subset, res);
}
int main()
{
    vector<vector<int>> res;
    vector<int> subset;
    vector<int> nums={1,2,3};
    dfs(nums, 0, subset, res);


        for( int i=0;i<res.size();i++)
        {
            cout << "[";
            for( int j=0;j<res[i].size();j++)
            {
                cout <<  res[i][j] << "";
            }
            cout << "]" << endl;
        }
   
    
}
/*
class Solution {
    public:
        int subsetXORSum(vector<int>& nums) {
             vector<int> subset;
              vector<vector<int>> res;
               dfs(nums, 0, subset, res);
               int sum=0;
          for (int i = 0; i < res.size(); i++) {
        int minisum = 0;
         
        for (int j = 0; j < res[i].size(); j++) {
    
               if (j == 0)
         {
               minisum = res[i][j];
         }
        else
          {
              minisum ^= res[i][j];
          }
        
         
        
        }
       sum+=minisum;
    
    }
    
       return sum;
        }
    
           void dfs(const vector<int>& nums, int i, vector<int>& subset, vector<vector<int>>& res) {
        if (i == nums.size()) {
            res.push_back(subset);
            return;
        }
        subset.push_back(nums[i]);
        dfs(nums, i + 1, subset, res);
        subset.pop_back();
        dfs(nums, i + 1, subset, res);
           }
    
    
    
    };
*/    