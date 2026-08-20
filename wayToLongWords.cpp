#include <iostream>
#include <string>
using namespace std;

int main()
{

    int input;
    cin >> input;

    string n[input];
    int angka[input];

    for (int i = 0; i < input; i++)
    {
        cin >> n[i];

        if (n[i].size() > 0 && n[i].size() <= 100)
        {
            angka[i] = 0;

            if (n[i].size() > 10)
            {
                angka[i] = n[i].size() - 2;
                n[i].erase(1, n[i].size() - 2);
            }
        }
    }

    for (int i = 0; i < input; i++)
    {
        if (angka[i] != 0)
        {
            cout << n[i].substr(0, 1) << angka[i] << n[i].substr(n[i].size() - 1, 1) << "\n";
        }
        else
        {
            cout << n[i] << '\n';
        }
    }

    return 0;
}
