#include <iostream>

using namespace std;


int main()
{

    int a, b = 0, c = 0;

    while (c == 0)
    {
    cout << "Enter the number";

    cin >> a;

    b = b + a;

    if (b >= 100)
    {
        cout << "Exceeds 100";

        c = 1;
    }
    }
    return 0;
}
