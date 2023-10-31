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

// https://leetcode.com/problems/valid-anagram/

void print_vector(vector<int> vec); // print int elements of a vector
void print_strchars(string s);
void solve();

// Leetcode class
class Solution {
public:
    bool isAnagram(string s, string t) {

       sort(s.begin(), s.end());
       sort(t.begin(), t.end());

        if(s == t){
            return true;
        }

        return false;
    }
};

int main(int argc, char const *argv[])
{
    string s = "rat";
    string t = "car";

    Solution sol;
    bool val = sol.isAnagram(s, t);

    if (val == true){
        cout << "true" << endl;
    }else{
        cout << "false" << endl;
    }

    return 0;
}

void solve(){

}

void print_vector(vector<int> vec){
    for(int x : vec)
        cout << x << " ";
    cout << endl;
}
