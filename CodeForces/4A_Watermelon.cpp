#include <iostream>

// https://codeforces.com/problemset/problem/4/A

using namespace std;

int main()
{
    int wt;
    cin >> wt;

    
    // 4 - 2 2
    // 5 - 3 2, 1 4
    // 6 - 3 3, 2 4
    // 10 - 5 5, 2 8

    if(wt % 2 == 0 && wt >= 4)
    {
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}