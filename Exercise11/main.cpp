#include <iostream>

using namespace std;

class Area{
public:
    int s1,s2;
    void getdim(int a, int b)
    {
        s1 = a;
        s2 = b;
    }
    float area()
    {
        return s1*s2;
    }
};
int main()
{
    int a1,a2;
    cout << "enter two numbers" << endl;
    cin >> a1 >> a2;

    Area ar;
    ar.getdim(a1,a2);
    cout << "The area is" << ar.area();
    return 0;
}
