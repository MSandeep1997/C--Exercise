#include <iostream>
#include <cmath>

using namespace std;

class triangle{
public:
    void area(int a,int b, int c){

    double s = (a+b+c)/2;

    double area = sqrt(s*(s-a)*(s-b)*(s-c));

    cout << "Perimeter" << s*2 << endl;

    cout << "Area" << area << endl;

    }
};
int main()
{
    triangle tr;
    tr.area(3,6,5);
    return 0;
}
