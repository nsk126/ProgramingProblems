#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <sstream>

#define ISEVEN(x) x % 2 == 0 // is even
#define ISDIV(x,y) x % y == 0 // is divisile
#define ll long long
#define ISTRUE(x) x ? "YES\n" : "NO\n"
#define LOGN(x) cout << (x) << endl

using namespace std;

// https://leetcode.com/problems/binary-search/

void print_vector(vector<int> vec);
void print_vector(vector<string> vec);
void solve();

class Solution {
public:
    int search(vector<int>& nums, int target) {

        int l = 0;
        int r = nums.size() - 1;

        while(l <= r){
            // midway point
            int m = (l + r)/2;
            if(nums[m] > target){
                r = m - 1;
            }else if(nums[m] < target){
                l = m + 1;
            }else{
                // found target
                return m;
            }
        }

        return -1; // if not found
    }
};

int main(int argc, char const *argv[])
{
    vector <int> arr = {-1,0,3,5,9,12};
    Solution sol;

    LOGN(sol.search(arr,2));
    return 0;
}

void solve(){

}

void print_vector(vector<int> vec){
    for(int x : vec)
        cout << x << " ";
    cout << endl;
}

void print_vector(vector<string> vec){
    for(string x : vec)
        cout << x << " ";
    cout << endl;
}