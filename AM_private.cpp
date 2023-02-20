#include <iostream>
using namespace std;
class AM_private
{
private:
    string fruitname;

public:
    void setdata()
    {
        cout << "enter the fruit name: ";
        cin >> fruitname;
    }
    void display()
    {
        cout << "Name of the fruit is : " << fruitname;
    }
};
int main()
{
    AM_private F;
    F.setdata();
    F.display();

    return 0;
}