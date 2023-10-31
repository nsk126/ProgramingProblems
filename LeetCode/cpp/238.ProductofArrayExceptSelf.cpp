#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <unordered_map>
#include <sstream>

#define ISEVEN(x) x % 2 == 0 // is even
#define ISDIV(x,y) x % y == 0 // is divisile
#define ll long long
#define ISTRUE(x) x ? "YES\n" : "NO\n"
#define LOGN(x) cout << (x) << endl;

using namespace std;

// https://leetcode.com/problems/product-of-array-except-self/

void print_vector(vector<int> vec); // print int elements of a vector
void solve();

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> res;

        res.resize(nums.size(), 1);

        int pre = 1;
        for (int i = 0; i < nums.size(); ++i)
        {
            // print_vector(res);
            res[i] = pre;
            pre *= nums[i];
        }

        int post = 1;
        for(int i = nums.size() - 1; i >=0; --i){
            // print_vector(res);
            res[i] *= post;
            post *= nums[i];
        }

        return res;

    }
};


int main(int argc, char const *argv[])
{
    Solution sol;

    vector <int> nums = {1,2,3,4};
    vector<int> res = sol.productExceptSelf(nums);
    print_vector(res);

    return 0;
}

void solve(){

}

void print_vector(vector<int> vec){
    for(int x : vec)
        cout << x << " ";
    cout << endl;
}
