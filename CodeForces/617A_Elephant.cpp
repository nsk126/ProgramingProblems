#include <iostream>

using namespace std;

// https://codeforces.com/problemset/problem/617/A

int main(int argc, char const *argv[])
{
    int x;
    cin >> x;

    int steps = 0;

    x <= 5 ? steps = 1 : steps = (x / 5) + (x % 5 > 0 ? 1 : 0);

    cout << steps << endl;

    return 0;
}
