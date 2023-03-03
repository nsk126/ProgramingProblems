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
#define ISTRUE(x) x ? "YES\n" : "NO\n"

using namespace std;

// https://codeforces.com/problemset/problem/266/B

void print_vector(vector<int> vec); // print int elements of a vector
void print_strchars(string s);
void solve();

int main(int argc, char const *argv[])
{
    int n, t; cin >> n >> t;

    string s; cin >> s;

    while(t--){

        vector<int> indx;
        for(int i=0; i < n - 1; i++){
            if(s[i] == 'B') indx.push_back(i);
        }

        for(auto x : indx){
            if(s[x+1] == 'G'){
                //swap x and x+1
                s[x] ^= s[x+1];
                s[x+1] ^= s[x];
                s[x] ^= s[x+1];
            }
        }
    }

    cout << s << endl;
    
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
