#include <iostream>
#include <vector>

// https://codeforces.com/problemset/problem/158/A

using namespace std;

int main(int argc, char const *argv[])
{
    int n, k;
    cin >> n >> k;

    int total_pass = 0;
    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }

    for (int i = 0; i < n; i++)
    {
        if(i >= k && arr[i] != arr[i-1]){
            break;
        }else{
            if(arr[i] > 0) total_pass++;
        }
    }

    cout << total_pass << endl;
    
    return 0;
}
