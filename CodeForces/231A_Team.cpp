#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int Qs_attempt = 0;

    for (int i = 0; i < n; i++)
    {
        int P, V, T;
        cin >> P >> V >> T;

        if(P + V + T > 1){
            Qs_attempt++;
        }
    }

    cout << Qs_attempt << endl;
    
    return 0;
}