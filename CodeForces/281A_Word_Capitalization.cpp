#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

// https://codeforces.com/problemset/problem/281/A

int main(int argc, char const *argv[])
{

    string s;
    cin >> s;

    s[0] = toupper(s[0]);
    cout << s << endl;

    return 0;
}
