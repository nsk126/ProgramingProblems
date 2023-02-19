#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#define ISEVEN(x) x % 2 == 0

using namespace std;

//

void print_vector(vector<int> vec);
void solve();

int main(int argc, char const *argv[])
{

    return 0;
}

void print_vector(vector<int> vec){
    for(int x : vec)
        cout << x << " ";
    cout << endl;
}
