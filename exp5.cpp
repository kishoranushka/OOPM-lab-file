// wap to find the greater no. out of two classes using friend function

#include<iostream>
using namespace std;
class anushka
{
    int amt1;

public:
    friend void sonali();
};
class pragya
{
        int amt2;
    public:
        friend void sonali();
};

void sonali()
{
    anushka A;
    pragya P;
    cout << "enter the amount of anushka: " ;
    cin >> A.amt1;
    cout << "enter the amount of Pragya: " ;
    cin >> P.amt2;
    
    if(A.amt1>P.amt2)
    {
        cout << "Amount of Anushka is greater.";
    }
    else{
        cout << "Amount of Pragya is greater.";
    }
}

int main()
{
    sonali();
    return 0;
}