#include <iostream>
#include <string>

using namespace std;

#define MAKE_UPPER ('A' - 'a')
#define MAKE_LOWER (-MAKE_UPPER)

// https://codeforces.com/problemset/problem/59/A

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;

    int u = 0, l = 0;

    for(char x : s){
        if(x >= 'a' && x <= 'z') l++;
        if(x >= 'A' && x <= 'Z') u++;
    }
    
    if(l >= u){
        // make lower
        for (auto i = 0; i < s.length(); i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z') s[i] = char(s[i] + MAKE_LOWER);
        }
    }else{
        // make upper
        for (auto i = 0; i < s.length(); i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z') s[i] = char(s[i] + MAKE_UPPER);
        }
    }

    cout << s << endl;

    return 0;
}
