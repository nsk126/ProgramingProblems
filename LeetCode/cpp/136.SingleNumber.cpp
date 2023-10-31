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

// https://leetcode.com/problems/single-number/

void print_vector(vector<int> vec);
void print_vector(vector<string> vec);
void solve();

class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int res = 0;

        for(auto num: nums){

            res ^= num;
        }

        return res;
    }
};

int main(int argc, char const *argv[])
{
    vector <int> tc = {2,2,1};

    Solution sol;
    int res = sol.singleNumber(tc);

    LOGN(res);

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