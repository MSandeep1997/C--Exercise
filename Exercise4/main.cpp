#include <iostream>

using namespace std;

int main()
{
    int n,i,q,s = 0;

    cout << "Enter the number" << endl;

    cin >> n;

    for(i = 1 ; i < n ; i++)
    {
        q = n % i;

        if (q == 0)
        {
            cout << "strict divisor" << i << endl;
            s += i;
            if(s == n)
            {
                cout << n << "is a Perfect number" << endl;
            }
        }
    }

    return 0;
}
