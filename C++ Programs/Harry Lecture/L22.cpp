#include <iostream>
#include <string>
using namespace std;

//----------------------NESTING OF MEMBER FUNCTIONS---------------------------

class binary
{
    string s;         // By Default taken as Private.

public:
    void read(void);
    void chk_bin(void);
    void display();
    void ones_complement();
};

void binary::read()
{
    cout << "Enter the Binary Number : ";
    cin >> s;
}

void binary::chk_bin()
{
    for (int i = 0; i < s.size(); i++) // string.size(); gives the length of the string.
    {
        if (s.at(i) != '0' && s.at(i) != '1') // string.at(index);
        {
            cout << "Invalid Binary Number !" << endl;
            exit(0);
        }
    }
}

void binary::display()
{
    cout << s << endl;
}

void binary::ones_complement()
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s.at(i) == '0')
            s.at(i) = '1';
        else
            s.at(i) = '0';
    }
}

int main()
{
    binary b;
    b.read();
    b.chk_bin();
    cout << "Binary is : " ;
    b.display();
    b.ones_complement();
    cout<<"Binary Complement : ";
    b.display();
    return 0;
}