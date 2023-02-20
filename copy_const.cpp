#include <iostream>
using namespace std;
class copyConst
{
public:
    int roll;
    copyConst()
    {
        roll = 4;
        cout << "your roll is: " << roll << endl;
    }
    copyConst(copyConst &obj)
    {
        cout << "copy constructor called." << endl;
        roll = obj.roll;
        cout << "roll: " << roll;
    }
};
int main()
{
    copyConst C1;
    copyConst c2(C1);
    return 0;
}