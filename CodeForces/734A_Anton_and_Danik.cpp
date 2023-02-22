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

// https://codeforces.com/problemset/problem/734/A

void print_vector(vector<int> vec);
void solve();

int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;

    string s;
    cin >> s;
    
    int A = 0,D = 0;

    for(auto x: s){
        x == 'A' ? A++ : D++;
    }

    if(A>D)
        cout << "Anton" << endl;
    if(A<D)
        cout << "Danik" << endl;
    if(A==D)
        cout << "Friendship" << endl;

    return 0;
}

void solve(){

}

void print_vector(vector<int> vec){
    for(int x : vec)
        cout << x << " ";
    cout << endl;
}
