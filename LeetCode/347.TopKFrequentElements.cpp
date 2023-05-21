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

// https://leetcode.com/problems/top-k-frequent-elements/

void print_vector(vector<int> vec); // print int elements of a vector
void print_strchars(string s);
void solve();

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> hmap;

        for (int i = 0; i < nums.size(); i++)
        {
            if(hmap.find(nums[i]) != hmap.end()){
                // add +1 val to key
                hmap[nums[i]] += 1;
            }else{
                // create key-value pair
                hmap[nums[i]] = 1;
            }
        }

        // find k largest values
        vector<int> res;
        for(int j = 0; j < k; j++){

            vector<int> highest = {0,0};
            for(auto x: hmap){
                if(x.second > highest[1]){
                    highest[0] = x.first;
                    highest[1] = x.second;
                }
            }
            res.push_back(highest[0]);
            hmap.erase(highest[0]);
        }

        return res;

    }
};

int main(int argc, char const *argv[])
{
    Solution sol;

    vector<int> nums = {1};
    int k = 1;

    vector<int> res = sol.topKFrequent(nums, k);
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
