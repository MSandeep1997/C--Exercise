#include <iostream>

using namespace std;

class rectangle{
public:
    int a,b;

    void area (int s1, int s2)
    {
        a = s1;
        b = s2;

        double ar = a*b;

        cout << "Area is" << ar << endl;
    }
};

int main()
{
    rectangle re;
    re.area(4,5);
    re.area(5,8);
    return 0;
}
