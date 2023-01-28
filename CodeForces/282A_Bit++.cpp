#include <iostream>
#include <string>

// https://codeforces.com/problemset/problem/282/A

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int X_value = 0;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if(s.find("+",0) != string::npos){
            X_value++;
        }else if(s.find("-",0) != string::npos){
            X_value--;
        }

    }

    cout << X_value << endl;
    
    return 0;
}
