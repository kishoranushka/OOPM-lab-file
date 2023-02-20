#include <iostream>
using namespace std;
class StaticMemberFunction
{
private:
    static int count;
    string fruit;

public:
    void setdata()
    {
        cout << "enter the name of the fruit: ";
        cin >> fruit;
        count++;
    }
    void dispaly()
    {
        cout << "name of the fruit is: " << fruit << endl;
    }
    static int getcount()
    {
        cout << "Total no of fruit is : " << count;
    }
};
int StaticMemberFunction::count;
int main()
{
    StaticMemberFunction F1, F2, F3;
    F1.setdata();
    F1.dispaly();
    F2.setdata();
    F2.dispaly();
    F3.setdata();
    F3.dispaly();
    StaticMemberFunction::getcount();

    return 0;
}