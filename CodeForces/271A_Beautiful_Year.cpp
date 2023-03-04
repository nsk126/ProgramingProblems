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

// https://codeforces.com/problemset/problem/271/A

void print_vector(vector<int> vec); // print int elements of a vector
void print_strchars(string s);
void solve();

int main(int argc, char const *argv[])
{
    int s;
    cin >> s;

    s += 1;
    
    while(true){
        int a = s % 10;
        int b = (s/10) % 10;
        int c = (s/100) % 10;
        int d = (s/1000) % 10;

        if(a == b || b == c || c == d || d == a || b == d || a == c){
            s++;
        }else{
            break;
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
