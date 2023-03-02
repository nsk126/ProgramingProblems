#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <sstream>

#define ISEVEN(x) x % 2 == 0 // is even
#define ISDIV(x,y) x % y == 0 // is divisile
#define ll long long

using namespace std;

// https://codeforces.com/problemset/problem/41/A

void print_vector(vector<int> vec); // print int elements of a vector
void print_strchars(string s);
void solve();

int main(int argc, char const *argv[])
{
    string s, t;

    cin >> s;
    cin >> t;

    // Goal: reverse s and compare to t
    string new_str;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        new_str += s[i];
    }

    cout << (new_str.compare(t) == 0 ? "YES" : "NO") << endl;
    
    return 0;
}

void solve(){

}

void print_vector(vector<int> vec){
    for(int x : vec)
        cout << x << " ";
    cout << endl;
}

void print_strchars(string s){
    for(auto x : s){
        cout << x << endl;
    }
}