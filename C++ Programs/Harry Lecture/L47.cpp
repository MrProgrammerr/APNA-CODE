#include <iostream>
#include<cmath>
using namespace std;

//  SOLUTION TO EXCERCISE 1

class simpleCalculator
{
    int a, b;

public:
    void getDataSimple()
    {
        cout << "Enter the value of a and b : " << endl;
        cin >> a >> b;
    }
    void calculateSimple()
    {
        cout << "Addition = " << a + b << endl;
        cout << "Subtraction = " << a - b << endl;
        cout << "Multiplication = " << a * b << endl;
        cout << "Division = " << a / b << endl;
        cout << "Modulus = " << a % b << endl;
    }
};
class scientificCalculator
{
    int a, b;

public:
    void getDataScientific()
    {
        cout << "Enter the value of a and b : " << endl;
        cin >> a >> b;
    }
    void calculateScientific()
    {
        cout << "cos(a) : " << cos(a) << endl;
        cout << "sin(a) : " << sin(a) << endl;
        cout << "exp(a) : " << exp(a) << endl;
        cout << "tan(a) : " << tan(a) << endl;
    }
};

class HybridCalculator : public scientificCalculator,public simpleCalculator{};

int main()
{
    HybridCalculator hb;
    hb.getDataSimple();
    hb.calculateSimple();
    hb.getDataScientific();
    hb.calculateScientific();
    return 0;
}