#include <iostream>

using namespace std;

// https://codeforces.com/problemset/problem/546/A

int main(int argc, char const *argv[])
{
    int k, w;
    long long n;

    cin >> k >> n >> w;

    int cost = k * w * (w + 1) / 2;    

    cost > n ? cost -= n : cost = 0; 

    cout << cost << endl;
  
    return 0;
}
