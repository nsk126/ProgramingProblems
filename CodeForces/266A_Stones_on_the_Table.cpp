#include <iostream>
#include <string>

using namespace std;

// https://codeforces.com/problemset/problem/266/A

int main(int argc, char const *argv[])
{
    int n; // # of stones
    cin >> n;

    string s;
    cin >> s; // string of stones

    int toRemove = 0;

    for (int i = 1; i < s.size(); i++)
    {
        if(s[i] == s[i - 1]) toRemove++;

    }
    
    cout << toRemove << endl;

    return 0;
}
