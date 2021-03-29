#include <iostream>

using namespace std;

class Average{
public:
    int s1,s2,s3;
    void avg(int a,int b,int c)
    {
        s1 = a;
        s2 = b;
        s3 = c;

        cout << float (s1+s2+s3)/3 << endl;
    }
};
int main()
{
    int a1,a2,a3;
    cout << "Enter three number " << endl;
    cin >> a1 >> a2 >> a3;

    Average av;
    av.avg(a1,a2,a3);
    return 0;
}
