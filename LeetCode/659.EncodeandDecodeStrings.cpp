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

// https://www.lintcode.com/problem/659/

void print_vector(vector<int> vec);
void print_vector(vector<string> vec);
void solve();

class Solution {
public:
    /*
     * @param strs: a list of strings
     * @return: encodes a list of strings to a single string.
     */
    string encode(vector<string> &strs) {
        // write your code here
        string res = "";
        string xm = "";

        for (string x: strs)
        {
            res += (x);
            xm += to_string(x.size());
        }

        res += ("!" + xm);

        return res;
    }

    /*
     * @param str: A string
     * @return: dcodes a single string to a list of strings
     */
    vector<string> decode(string &str) {
        // write your code here
        vector<string> res;

        int endOfString;
        vector<int> sizes;

        for (int i = str.size(); i >= 0; --i)
        {
            if(str[i] == '!') break;
            if(str[i] == '\0') continue;

            sizes.push_back(str[i] - '0');
        }

        reverse(sizes.begin(), sizes.end());

        for (auto x : sizes)
        {
            string temp;
            temp = str.substr(0, x);
            str.erase(0, x);
            res.push_back(temp);
        }

        return res;

    }
};

int main(int argc, char const *argv[])
{
    Solution sol;

    vector <string> ip = {"lint","code","love","you"};

    string s = sol.encode(ip);
    cout << s << endl;

    vector <string> op;
    op = sol.decode(s);
    print_vector(op);
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
