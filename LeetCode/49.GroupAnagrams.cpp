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

// https://leetcode.com/problems/group-anagrams/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> res;
        unordered_map<string, vector<string>> hmap;

        for(int i=0; i < strs.size(); i++){
            string s = strs[i];
            sort(s.begin(), s.end());

            auto x = hmap.find(s);
            if(x != hmap.end()){ // if sorted str s found
                x -> second.push_back(strs[i]);
            }else{ // if sorted str s not found
                hmap[s].push_back(strs[i]);
            }
        }

        // now to - iterate over hmap and place value arrays into a vector
        for(auto xx : hmap){

            auto xy = xx.second;
            res.push_back(xy);
        }

        return res;
    }
};

void print_vector(vector<int> vec); // print int elements of a vector
void print_vec_vec_string(vector<vector<string>> vec);
void solve();

int main(int argc, char const *argv[])
{
    Solution sol;
    vector<string> input = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> output = sol.groupAnagrams(input);

    print_vec_vec_string(output);

    return 0;
}

void solve(){

}

void print_vector(vector<int> vec){
    for(int x : vec)
        cout << x << " ";
    cout << endl;
}

void print_vec_vec_string(vector<vector<string>> vec){
    for(auto x : vec){
        for(auto y: x){
            cout << y << " ";
        }
        cout << endl;
    }
}
