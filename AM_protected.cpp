#include <iostream>
using namespace std;
class AM_protected
{
protected:
    string name;

public:
    void getdata()
    {
        cout << "Enter Your Crush Name:";
        cin >> name;
    }
};
class derived : public AM_protected
{
public:
    void display()
    {
        cout << "Your Crush Name is : " << name;
    }
};
int main()
{
    derived d1;
    d1.getdata();
    d1.display();
    return 0;
}