#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int x,y; // pos of number

    // Scanning for element
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {   
            int tempx = 0;
            cin >> tempx; 
            if(tempx == 1){
                y = j; // column
                x = i; // row
            }
        }       
    }

    // Centering
    int total_step = abs(x - 2) + abs(y - 2);
    cout << total_step << endl;
    
    return 0;
}
