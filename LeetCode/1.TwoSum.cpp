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

// https://leetcode.com/problems/two-sum/

void print_vector(vector<int> vec); // print int elements of a vector
void print_strchars(string s);
void solve();

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {

        unordered_map<int,int> hashmap;
        vector<int> result;

        for(int i=0; i<nums.size(); i++){

            int findthis = target - nums[i];

            if(hashmap.find(findthis) != hashmap.end()){
                result.push_back(hashmap[findthis]);
                result.push_back(i);
                break;
            }else{
                hashmap.insert({nums[i], i});
            }
        }

        return result;
    }
};

int main(int argc, char const *argv[])
{
    Solution sol;

    vector <int> nums = {3,3};
    int target = 6;

    vector<int> res = sol.twoSum(nums, target);
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
