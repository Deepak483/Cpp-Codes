#include <iostream>
using namespace std;
/*
student --> test
student --> sports
test --> result
sports --> result

*/
class Student
{
protected:
    int rollNo;

public:
    //* setter method
    void setRollNo(int a)
    {
        rollNo = a;
    }
    //* getter method
    void printRollNo(void)
    {
        cout << "Your roll no is " << rollNo << endl;
    }
};

class Test : virtual public Student //* virtual base class keyword
{
protected:
    float maths, physics;

public:
    void setMarks(float m1, float p1)
    {
        maths = m1;
        physics = p1;
    }
    void getMarks(void)
    {
        cout << "Your result is here: " << endl
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float scores;

public:
    void setScores(float sc)
    {
        scores = sc;
    }
    void displayScores(void)
    {
        cout << "Your PT scores is " << scores << endl;
    }
};

class Result : public Sports, public Test
{
private:
    float totalMarks;

public:
    void displayResult(void)
    {
        totalMarks = maths + physics + scores;
        printRollNo();
        getMarks();
        displayScores();
        cout << "Your total scores is: " << totalMarks << endl;
    }
};
int main()
{
    Result deepak;
    deepak.setRollNo(499);
    deepak.setMarks(89.77, 90.1);
    deepak.setScores(10);
    deepak.displayResult();
    return 0;
}