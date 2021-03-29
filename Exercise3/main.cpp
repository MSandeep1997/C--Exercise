#include <iostream>

using namespace std;

int main()
{
    int num , mul = 1 , sum = 0;
    do
    {
        cout << "Enter the numbers" << endl;

        cin >> num;

        if (num > 0)
        {
           mul *= num;
           sum += num;
        }

    }
    while (num > 0);
    {
        cout << "Sum" << sum << endl;
        cout << "Multiplication" << mul <<endl;
    }

    return 0;
}
