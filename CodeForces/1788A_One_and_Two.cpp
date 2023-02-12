#include <iostream>
#include <vector>

// https://codeforces.com/contest/1788/problem/A

using namespace std;

void print_vector(vector<int> vec){
    cout << "Vector -> ";
    for(int x : vec)
        cout << x << " ";
    cout << endl;
}

void solve(){

    int n;
    cin >> n;

    vector<int> k_index;

    for(int i = 1; i <= n; i++)
    {
        int j;
        cin >> j;

        if(j == 2) k_index.push_back(i);
    }
    
    if(k_index.size() % 2 != 0){
        cout << -1 << endl;
        return;
    }

    if(k_index.size() == 0){
        // print_vector(k_index);
        cout << 1 << endl;
        return;
    }

    // print_vector(k_index);
    cout << k_index[k_index.size() / 2 - 1] << endl;
}

int main(int argc, char const *argv[])
{
    int tcase;
    cin >> tcase;

    while (tcase--)
    {   
        // cout << "#" << 13-tcase << endl;
        solve();
    }
    
    return 0;
}
