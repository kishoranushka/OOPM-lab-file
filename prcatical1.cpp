// consider an example of declaring the exam result .design 3 classes student, exam and result
// the student class has the data member such as name, roll nmnbr, etc
// create a class exam by inheriting the student class
// the exam class should add data members representing marks scored in 6 subjects.
// derive class result from the exam class and it should have its own data members such as total marks.
// write an interaptive program to model this relationship.
// which type of inheritence this model belongs to

#include <iostream>
using namespace std;
class student
{
private:
    char name[50];
    int roll;

public:
    void getdata()
    {
        cout << "\nenter the student name: ";
        cin >> name;
        cout << "\nenter the roll number: ";
        cin >> roll;
    }
    void display()
    {
        cout << "\nname: " << name;
        cout << "\nroll number: " << roll<<"\n";
    }
};
class exam : public student
{
public:
    int phy, chem, maths, sci, bio, comp;
    void marks()
    {
        cout << "\n\nenter the marks scored in physics: ";
        cin >> phy;
        cout << "\nenter the marks scored in chemistry: ";
        cin >> chem;
        cout << "\nenter the marks scored in maths: ";
        cin >> maths;
        cout << "\nenter the marks scored in science: ";
        cin >> sci;
        cout << "\nenter the marks scored in biology: ";
        cin >> bio;
        cout << "\nenter the marks scored in computer: ";
        cin >> comp;
    }
    void disp_marks()
    {
        cout << " \n\nthe marks scored in physics: " << phy;
        cout << " \nthe marks scored in chemistry: " << chem;
        cout << " \nthe marks scored in maths: " << maths;
        cout << " \nthe marks scored in science: " << sci;
        cout << " \nthe marks scored in biology: " << bio;
        cout << " \nthe marks scored in computer: " << comp<<"\n";
    }
};
class result : public exam
{
public:
    int total_marks()
    {
        cout << "\ntotal marks scored by student is : " << phy + chem + maths + sci + bio + comp;
    }
};
int main()
{
    system("cls");
    result n1;
    n1.getdata();
    system("cls");
    n1.display();
    system("pause");
    system("cls");
    n1.marks();
    system("cls");
    n1.disp_marks();
    system("pause");
    n1.total_marks();

    return 0;
}