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
#define LOGN(x) cout << (x) << endl;

using namespace std;

// https://leetcode.com/problems/number-of-1-bits/

void print_vector(vector<int> vec);
void print_vector(vector<string> vec);
void solve();

class Solution {
public:
    int hammingWeight(uint32_t n) {

        int hweight = 0;

        while(n != 0){

            // check if last digit is 1 or 0
            if(n & 1 == 1){
                hweight++;
            }

            n = n >> 1;
        }

        return hweight;
    }
};

int main(int argc, char const *argv[])
{
    uint32_t ip = 0b11111111111111111111111111111101;
    Solution sol;
    int res = sol.hammingWeight(ip);
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