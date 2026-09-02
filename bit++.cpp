#include <iostream>
using namespace std;

int main()
{
    int n;
    int x = 0;

    cin >> n;

    string input[n];

    for (int i = 0; i < n; i++)
    {
        cin >> input[i];

        if (input[i] == "++X" || input[i] == "++x" || input[i] == "X++" || input[i] == "x++")
        {
            x++;
        }
        else if (input[i] == "--X" || input[i] == "--x" || input[i] == "X--" || input[i] == "x--")
        {
            x--;
        }
    }

    cout << x;

    return 0;
}