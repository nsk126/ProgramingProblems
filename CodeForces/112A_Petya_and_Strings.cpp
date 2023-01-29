#include <iostream>
#include <string>
#include <algorithm>

#define LOGL(X) cout << (X) << endl

// https://codeforces.com/problemset/problem/112/A

using namespace std;

int main(int argc, char const *argv[])
{

    string a, b;
    cin >> a >> b;

    transform(a.begin(), a.end(),a.begin(), ::tolower);
    transform(b.begin(), b.end(),b.begin(), ::tolower);
    
    if(a < b){

        cout << -1 << endl;
    
    }else if(a > b){
    
        cout << 1 << endl;
    
    }else{
    
        cout << 0 << endl;
    
    }
    
    return 0;
}
