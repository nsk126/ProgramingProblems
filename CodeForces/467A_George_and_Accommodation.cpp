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

// https://codeforces.com/problemset/problem/467/A

void print_vector(vector<int> vec); // print int elements of a vector
void print_strchars(string s);
void solve();

int main(int argc, char const *argv[])
{
    int n; cin >> n;

    int room = 0;

    while(n--){
        int p,q;
        cin >> p >> q;
        
        if(q - p >= 2) room++;
    }

    cout << room << endl;
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