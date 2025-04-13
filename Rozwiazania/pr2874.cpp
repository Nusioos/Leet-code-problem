#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    vector<int> nums = {12, 6, 1, 2, 7};
    int n = nums.size();
    if (n < 3) return 0;

    int maxVal = 0;
    int maxLeft = nums[0];
    vector<int> maxRight(n);
    
   
    maxRight[n - 1] = nums[n - 1];
    for (int i = n - 2; i >= 0; --i) {
        maxRight[i] = max(maxRight[i + 1], nums[i]);
    }

    for (int j = 1; j < n - 1; ++j) {
        int diff = maxLeft - nums[j];
        maxVal = max(maxVal, diff * maxRight[j + 1])
    }

   cout << maxVal << endl;

    return 0;
}