#include <iostream>
using namespace std;

int main()
{

    int n;
    int k;

    cin >> n >> k;

    int jumlah = 0;

    int score[n];

    for (int i = 0; i < n; i++)
    {
        cin >> score[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (score[i] > 0 && score[i] >= score[k - 1])
            jumlah++;
    }

    cout << jumlah;

    return 0;
}