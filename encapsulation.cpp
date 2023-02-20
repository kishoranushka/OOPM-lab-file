#include <iostream>
using namespace std;
class encapsulation
{
    int length, breadth;

public:
    void getdata(int l, int b)
    {

        length = l;
        breadth = b;
    }

    int area()
    {
        return length * breadth;
    }
};
int main()
{
    encapsulation e1;
    e1.getdata(3, 4);
    cout << "area of rectangle: " << e1.area();
    return 0;
}