#include <iostream>
using namespace std;
class destructor
{
public:
    destructor()
    {
        cout << "constructor called." << endl;
        cout << "object created." << endl;
    }
    ~destructor()
    {
        cout << "destructor called." << endl;
        cout << "Object destroyed.";
    }
};
int main()
{
    destructor D1;
    return 0;
}