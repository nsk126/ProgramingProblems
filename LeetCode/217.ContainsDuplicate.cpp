#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <sstream>

#define ISEVEN(x) x % 2 == 0 // is even
#define ISDIV(x,y) x % y == 0 // is divisile
#define ll long long
#define ISTRUE(x) x ? "YES\n" : "NO\n"
#define LOGN(x) cout << (x) << endl;

using namespace std;

// https://leetcode.com/problems/contains-duplicate/

void print_vector(vector<int> vec); // print int elements of a vector
void print_strchars(string s);
void solve();

// Leetcode class
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        vector<int> buff;

        // sort
        sort(nums.begin(), nums.end());

        // print_vector(nums);

        for(int i=0; i < nums.size() - 1; i++){

            if(nums[i] == nums[i+1]) return true;
        }

        return false;
    }
};

int main(int argc, char const *argv[])
{
    vector<int> nums = {1,1,1,3,3,4,3,2,4,2};
    // print_vector(nums);

    Solution sol;
    bool val = sol.containsDuplicate(nums);

    val == 1? (cout << "true" << endl) : (cout << "false" << endl);

    return 0;
}

void solve(){

}

void print_vector(vector<int> vec){
    for(int x : vec)
        cout << x << " ";
    cout << endl;
}
