#include<iostream>
using namespace std;

//---------------------------VIRTUAL BASE CLASS---------------------------//

/*
 *                            A    // This should be Virtual Base class so that D get Properties
 *                            |    // of A only once i.e not from both B and C.
 *                            |
 *            B <----------------------------> C   
 *            |                                |
 *            --------------> D <---------------
 */

class Student
{
    protected:
    int roll;
    public:
    void set_roll(int a)
    {
        roll=a;
    } 
    void print_roll(void)
    {
        cout<<"Roll Number = "<<roll<<endl;
    }
};
class Test : virtual public Student
{
    protected:
    float maths,physics;
    public:
    void set_marks(float m1,float m2)
    {
        maths=m1;
        physics=m2;
    }
    void print_marks()
    {
        cout <<"Physics Mark = "<<physics<<endl
             <<"Maths Mark = "<<maths<<endl;
    }
};
class Sports : virtual public Student
{
    protected:
    float score;
    public:
    void set_score(float sc)
    {
        score =sc;
    }
    void print_score()
    {
        cout <<"Score = "<<score<<endl;
   }
};
class Result : public Test,public Sports
{
    float total;
    public:
    void display()
    {
        total=maths+physics+score;
        print_roll();
        print_marks();
        print_score();
        cout<<"Total Score = "<<total<<endl;
    }
};

int main()
{
    Result ck;
    ck.set_roll(25);
    ck.set_marks(90.0f,92.5f);
    ck.set_score(9);
    ck.display();   
    return 0;
}