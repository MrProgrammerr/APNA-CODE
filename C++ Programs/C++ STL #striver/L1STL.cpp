#include <bits/stdc++.h>
using namespace std;
//--------------User defined Scope----------------
// namespace chandan
// {
//     int val = 15;
//     int getVal()
//     {
//         return val;
//     }
// }

//-------------User defined Datatype---------------
// struct node
// {
//     string name;
//     int roll;
//     double mark;
//     node(string str,int rl,double mrk)
//     {
//         name=str;
//         roll=rl;
//         mark=mrk;
//     }
// };
int main()
{
    // double val = 10.9;
    // cout << val << endl;
    // cout << chandan::val << endl;
    // cout << chandan::getVal() << endl;

    // node *node1 = new node("Chandan",44,9.60);
    // cout<<node1->name<<" "<<node1->roll<<" "<<node1->mark<<endl;

    // ------------------------CONTAINER ARRAYS-------------------------
    // array<int,10> arr;//array of int size 10 named arr.Garbage values
    // array<int,3> arr2={1,2}; // {1 , 2 , 0}
    // arr.fill(3); // makes all values as 3
    // arr.at(1);   //Gives value at index 1
    // arr.begin(); // Iterator points to start element
    // arr.rbegin();// Iterator points to end element
    // arr.end();  // Iterator Points to empty element after the actual end
    // arr.rend(); //Iterator points to empty element just before the start
    // arr.size(); // Returns the size
    // arr.front() // Gives the first value
    // arr.back()  // Gives the last elements
    /*
    array<int, 5> arr = {1, 2, 3, 4, 5};
    for (auto it = arr.begin(); it != arr.end(); it++) // "it" is the iterator of auto type(takes datatype autimatically)
    {
        cout << *it << "\t";
    }
    cout << endl;
    for (auto it = arr.rbegin(); it != arr.rend(); it++)
    {
        cout << *it << "\t";
    }
    cout << endl;
    for (auto it = arr.end() - 1; it >= arr.begin(); it--)
    {
        cout << *it << "\t";
    }
    cout << endl;
    for (auto c : arr)
    {
        cout << c << "\t";
    }
    */

    // ---------------------- VECTOR CONTAINER ------------------------
    // vector<int> vec;                                  // {}
    // vec.push_back(10);                                // {10}
    // vec.push_back(89);                                // {10,89}
    // vec.push_back(65);                                // {10,89,65}
    // vec.emplace_back(98);                             // {10,89,65,98} , Does same as push_back but takes less time
    // vec.pop_back();                                   // {10,89,65}
    // vec.clear();                                      // {} -> Erase all elements
    // vector<int> vec2(4, 8);                           // {8,8,8,8}
    // vector<int> vec3(vec2);                           // copies the vec2 in vec3
    // vector<int> vec4(vec2.begin(), vec2.begin() + 2); // {8,8}
    // for (auto it = vec2.begin(); it != vec2.end(); it++)
    // {
    //     cout << *it << "\t";
    // }
    // cout << endl;
    // for (auto it = vec2.rbegin(); it != vec2.rend(); it++)
    // {
    //     cout << *it << "\t";
    // }
    // cout << endl;
    // for (auto c : vec2)
    // {
    //     cout << c << "\t";
    // }

    //---------------------------- 2-D VECTOR --------------------------
    // vector<int> vec1;
    // vec1.emplace_back(12);
    // vec1.emplace_back(25);

    // vector<int> vec2;
    // vec2.emplace_back(56);
    // vec2.emplace_back(32);

    // vector<int> vec3;
    // vec2.emplace_back(98);
    // vec2.emplace_back(105);
    // vec2.emplace_back(238);

    // vector<vector<int>> vec;
    // vec.emplace_back(vec1);
    // vec.emplace_back(vec2);
    // vec.emplace_back(vec3);

    // for (auto it : vec)
    // {
    //     for (auto it2 : it)
    //     {
    //         cout << it2 << "\t";
    //     }
    // }
    // // for(int i=0;i<vec.size();i++)
    // // {
    // //     for(int j=0;j<vec[i].size();j++)
    // //     {
    // //         cout<<vec[i][j]<<"\t";
    // //     }
    // //     cout<<endl;
    // // }
    // vector<vector<int>> vec4(10, vector<int>(20, 0)); // Creates a 10 X 20 size vector with all values 0 .
    // vector<int> arr[9];                              // creates the array of size 9 of vectors
    // vector<vector<vector<int>>> vect(10,vector<vector<int>>(20,vector<int>(30,0))); //Creates 10 X 20 X 30 vector

}