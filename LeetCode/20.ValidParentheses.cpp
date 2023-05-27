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

// https://leetcode.com/problems/valid-parentheses/

void print_vector(vector<int> vec);
void print_vector(vector<string> vec);
void solve();

class Solution {
public:
    bool isValid(string s) {

        stack<char> st;
        unordered_map<char,char> hmap = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };

        for(auto x : s){
            // cout << x << endl;
            if(hmap.find(x) != hmap.end()){
                // if closing bracket is found
                // check if stack is empty
                if(st.empty()) return false;

                if(st.top() != hmap[x]) return false; // if top of stack - latest element in stack is opening bracket of same type

                // remove last element in stack - since it is same type
                st.pop();
            }else{
                // if not closing bracket,(must be opening) then add to stack
                st.push(x);
            }
        }

        return st.empty();
    }
};

int main(int argc, char const *argv[])
{
    Solution sol;

    string s = "()[]{}";
    bool res = sol.isValid(s);
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