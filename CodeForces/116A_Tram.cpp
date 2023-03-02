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

// https://codeforces.com/problemset/problem/116/A

void print_vector(vector<int> vec);
void solve();

int main(int argc, char const *argv[])
{
    int n; cin >> n;

    int current_cap = 0;
    int max_cap = 0;

    while(n--){
        int a, b;
        cin >> a >> b; // a exits , b enters

        current_cap += (b-a);

        if(max_cap < current_cap) max_cap = current_cap;

        // cout << current_cap << endl;
    }

    cout << max_cap << endl;
    
    return 0;
}

void solve(){

}

void print_vector(vector<int> vec){
    for(int x : vec)
        cout << x << " ";
    cout << endl;
}
