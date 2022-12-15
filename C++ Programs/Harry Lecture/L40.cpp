#include<iostream>
using namespace std;

//--------------------------MULTILEVEL INHERITANCE----------------------------

class Student
{
    protected:
    int roll;
    public:
    void set_roll_number(int r)
    {
        roll=r;
    }
    void get_roll_number()
    {
        cout<<"Roll Numeber : "<<roll<<endl;
    }
};
class Exam: public Student
{
    protected:
    float maths,physics;
    public:
    void set_mark(float m,float p)
    {
        maths=m;
        physics=p;
    }
    void get_mark()
    {
        cout<<"Maths mark = "<<maths<<endl;
        cout<<"Physics mark = "<<physics<<endl;
    }
};
class Result: public Exam
{
    float percentage;
    public:
        void display()
        {
            get_roll_number();
            get_mark();
            cout<<"Percentage = "<<(maths+physics)/2<<"%"<<endl;
        }
};

int main()
{
    Result ck;
    ck.set_roll_number(201);
    ck.set_mark(90.5f,91.0f);
    ck.display();
    return 0;
}