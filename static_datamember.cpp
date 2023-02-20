#include <iostream>
using namespace std;
class StaticDataMember
{
private:
    static int count;
    int length;

public:
    void getdata()
    {
        cout << "enter any length: ";
        cin >> length;
        count++;
    }
    void display()
    {
        cout << "count: " << count << "\n";
    }
};
int StaticDataMember::count;

int main()
{
    StaticDataMember m1, m2, m3;
    m1.display();
    m2.display();
    m3.display();
    cout << "\n after reading data\n";
    m1.getdata();
    m2.getdata();
    m3.getdata();
    m1.display();
    m2.display();
    m3.display();
    // cout << "count: " << m1.count;

    return 0;
}