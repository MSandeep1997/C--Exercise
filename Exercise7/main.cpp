#include <iostream>

using namespace std;

class student{
public:
    string name;
    int rollno;
    long long phno;
    string addr;
};

int main()
{
    student s;
    s.name = "Sandeep";
    s.rollno = 20101404;
    s.phno = 7787885129;
    s.addr = "IIT Kanpur";
    cout << s.name << " has the roll no" << s.rollno << " You can contact through" << s.phno << " He lives in" << s.addr << endl;
    s.name = "Subhanshu";
    s.rollno = 20101406;
    s.phno = 7787885120;
    s.addr = "IIT Kanpur";
    cout << s.name << " has the roll no" << s.rollno << " You can contact through" << s.phno << " He lives in" << s.addr << endl;
    return 0;
}
