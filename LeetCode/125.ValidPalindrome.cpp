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

// https://leetcode.com/problems/valid-palindrome/

void print_vector(vector<int> vec);
void print_vector(vector<string> vec);
void print_vector(vector<float> vec);
void solve();

class Solution {
public:
    bool isPalindrome(string s) {

        bool res;
        string s2;

        for(char a : s){
            // check if number or alphabet
            if(a < '0')
                continue; // skip

            if(a > '9' && a < 'A')
                continue; // skip

            if(a > 'Z' && a < 'a')
                continue; // skip

            if(a > 'z')
                continue; // skip

            // convert uppercase to lowercase
            if(a >= 'A' && a <= 'Z')
                a = a + ('a' - 'A');

            // condition if ONLY alpha-numerical
            s2.push_back(a);
        }
        string s3 = s2;
        reverse(s2.begin(), s2.end());

        res = (s2 == s3);
        return res;
    }

};

int main(int argc, char const *argv[])
{
    string s = "race a car";
    Solution sol;

    bool res = sol.isPalindrome(s);
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

void print_vector(vector<float> vec){
    for(float x : vec)
        cout << x << " ";
    cout << endl;
}