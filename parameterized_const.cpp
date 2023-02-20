#include <iostream>
using namespace std;
class paraConst
{
public:
    int id;
    string name;
    paraConst(int emp_id, string emp_name)
    {
        id = emp_id;
        name = emp_name;
    }
    void display()
    {
        cout << "Employee name: " << name << endl
             << "Employee Id: " << id;
    }
};
int main()
{
    paraConst E1(03, "Anushka");
    E1.display();
    return 0;
}