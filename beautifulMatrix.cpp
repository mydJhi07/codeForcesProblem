#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<vector<int>> posisi(5, vector<int>(5));

    int jumlah = 0;
    bool dapat = false;

    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < 5; j++)
        {
            cin >> posisi[i][j];
        }
    }

    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < 5; j++)
        {
            if (posisi[i][j] == 1)
            {
                jumlah = (abs(i - 2) + abs(j - 2));
            }
        }
    }

    cout << jumlah;

    return 0;
}