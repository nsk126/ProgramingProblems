#include <iostream>

// https://codeforces.com/problemset/problem/50/A

using namespace std;

int main(int argc, char const *argv[])
{
    int m,n;

    cin >> m >> n;

    int area = m * n;

    cout << int(area / 2) << endl;
        
    return 0;
}
