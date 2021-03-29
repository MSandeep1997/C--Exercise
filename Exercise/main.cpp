#include <iostream>

using namespace std;

int main()
{
    long a,b = 1,i;

    cout << "Enter a number" << endl;
    cin >> a;

    for (i = 0 ; i < a ; i++)
    {
        b = b*a;
    }
    cout << "The result N pow N is" << b << endl;
    return 0;
}
