#include <iostream>
#include<vector>
using namespace std;

int first_search( vector<vector<int>>  &wiersz, int target)
{

    int left = 0;
    int right = wiersz.size()-1;
    while (left <= right) {
    int mid = left + (right - left) / 2 ;
    if (wiersz[mid][0] <= target && wiersz[mid][wiersz[mid].size() - 1] >= target) {
            return mid; 
        } else if (wiersz[mid][0] > target) {
            right = mid - 1;  
        } else {
            left =mid+ 1; 
        }
    }
    return -1; 

    }
    int binarySearch(const vector<int>& arr, int target) {
        int left = 0, right = arr.size() - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
    
            if (arr[mid] == target) {
                return mid;  
            } else if (arr[mid] < target) {
                left = mid + 1; 
            } else {
                right = mid - 1;  
            }
        }
        
        return -1;  
    }

int main() {
    vector<vector<int>> matrix={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target=30;

    cout << "Liczba wierszy: " << matrix.size() << endl;
    if (!matrix.empty()) {
        cout << "Liczba kolumn: " << matrix[0].size() << endl;
    }
   int cos= matrix[0].size();
int s=first_search(matrix,target);
cout << s << endl;
int w=binarySearch(matrix[s],target);
cout << w << endl;

if(w==-1)
{
    return false;
}
else
{
    return true;
}
}

