#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

#define ISEVEN(x) x % 2 == 0

using namespace std;

// https://codeforces.com/problemset/problem/1/A

void print_vector(vector<int> vec);
void solve();

int main(int argc, char const *argv[])
{
    long double n, m ,a;
    cout.precision(22);
    cin >> n >> m >> a;
    
    cout << ceil(n/a) * ceil(m/a) << endl;    
    return 0;
}

void solve(){

}
void print_vector(vector<int> vec){
    for(int x : vec)
        cout << x << " ";
    cout << endl;
}
