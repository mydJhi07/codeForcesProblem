#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int a[n];
    int b[n];
    int c[n];
    int jumlah = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i] >> c[i];
        if ((a[i] == 1 || a[i] == 0) && (b[i] == 1 || b[i] == 0) && (c[i] == 1 || c[i] == 0))
        {
            if (a[i] == 1 && b[i] == 1 && c[i] == 1)
            {
                jumlah++;
            }
            else if ((a[i] == 1 && b[i] == 1) || (a[i] == 1 && c[i] == 1) || (b[i] == 1 && c[i] == 1))
            {
                jumlah++;
            }
        }
    }

    cout << jumlah;

    return 0;
}