#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#define ISEVEN(x) x % 2 == 0

using namespace std;

// https://codeforces.com/contest/1795/problem/A

void print_vector(vector<int> vec);
void solve();

int main(int argc, char const *argv[])
{
    int tcase;
    cin >> tcase;

    while (tcase--)
    {
        solve();
    }
    
    return 0;
}

void solve(){

    int n, m;
    cin >> n >> m; // sizeof n and m

    string N, M;
    cin >> N; // tower n
    cin >> M; // tower m

    reverse(M.begin(), M.end());
    N += M;

    int count = 0;
    for (int i = 1; i < (n + m); ++i){

        count += N[i - 1] == N[i];
    } 
    cout << (count <= 1 ? "YES" : "NO") << endl;
    

}

void print_vector(vector<int> vec){
    for(int x : vec)
        cout << x << " ";
    cout << endl;
}