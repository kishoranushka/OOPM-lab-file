#include <iostream>
using namespace std;
class AM_public
{
public:
    string name;
    void getdata()
    {
        cout << "enter your name: ";
        cin >> name;
    }
    // void showdata()
    // {
    // cout << "Your name is : " << name;
    // }
};
int main()
{
    AM_public A;
    A.getdata();
    // A.showdata();
    cout << "Your name is : " << A.name;
    return 0;
}