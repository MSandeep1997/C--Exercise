#include <iostream>

using namespace std;

class area{
public:
    int s1,s2;
    void get_dim(int a,int b)
    {
    s1 = a;
    s2 = b;
    }
    float area1()
    {
    return s1*s2;
    }
};
int main()
{
    area a;
    a.get_dim(2,3);
    cout << "Area is " << a.area1();
    return 0;
}
