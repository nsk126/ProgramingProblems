#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <sstream>

#define ISEVEN(x) x % 2 == 0 // is even
#define ISDIV(x,y) x % y == 0 // is divisile
#define ll long long
#define ISTRUE(x) x ? "YES\n" : "NO\n"
#define LOGN(x) cout << (x) << endl;

using namespace std;

// https://leetcode.com/problems/longest-consecutive-sequence/

void print_vector(vector<int> vec);
void print_vector(vector<string> vec);
void solve();

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> set;

        for (int i = 0; i < nums.size(); i++)
        {
            set.insert(nums[i]); // add elements to set
        }

        // count of largest seq
        int large = 0;

        for(int x: nums){
            // cout << "val: " << x << endl;
            // find if x is start of sequence, if not break
            if(set.count(x-1)>0) continue;

            // find if x has a sequence and count it
            int slen = 0;
            while(set.count(x) > 0){
                // cout << x << endl;
                slen++;
                x++;
            }
            // slen has a value = len of sequence: Goal to find largest
            large = max(large, slen);
        }

        return large;
    }
};

int main(int argc, char const *argv[])
{
    Solution sol;

    vector <int> nums = {0,3,7,2,5,8,4,6,0,1};
    int res = sol.longestConsecutive(nums);
    cout << res << endl;
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