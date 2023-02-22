#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>

#define ISEVEN(x) x % 2 == 0 // is even
#define ISDIV(x,y) x % y == 0 // is divisile
#define ll long long

using namespace std;

// https://codeforces.com/problemset/problem/110/A

void print_vector(vector<int> vec);
void solve();

int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;

    string s;
    s = to_string(n);

    int count = 0;

    for(auto x: s){
        if(x == '4' || x == '7') count++;    
    }

    (count == 4 || count == 7) ? cout << "YES\n" : cout << "NO\n";
    
    return 0;
}

void solve(){

}

void print_vector(vector<int> vec){
    for(int x : vec)
        cout << x << " ";
    cout << endl;
}
