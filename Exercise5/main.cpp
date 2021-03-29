#include <iostream>

using namespace std;

class student{
public :
    string name;
    int rollno;
};

int main()
{
    student student;
    student.name = "Sandeep";
    student.rollno = 20101404;

    cout << student.name << "has roll no" << student.rollno ;
    return 0;
}
