#include<iostream>
using namespace std;

//------------------------ VECTORS -------------------------

// Reference : https://cplusplus.com/reference/vector/vector/

#include<vector>

void display(vector<int> &v)
{
    cout<<"\nVector is : ";
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<"  ";               // also " v.at(i) " can be written
    }
    cout<<endl<<endl;
}

int main()
{
    int n,ele; 
    vector<int> vec1;                         // Create a zero size vector
    vector<int> vec2(4);                      // Create a vector of size 4
    vector<int> vec3(vec2);                   // Create a vector of size4 from vec2
    vector<int> vec4(4,6);                    // Create a vector containing four sixes
    display(vec4);
    
    cout<<"\nEnter the Sizeof the Vector : ";
    cin>>n;
    cout<<"\nEnter the Vector Values : ";
    for ( int i = 0; i < n; i++)
    {
        cin>>ele;
        vec1.push_back(ele);
    }
    display(vec1);

    vector<int> :: iterator iter;    // This is the iterator of type [ vector<int> ]
    iter=vec1.begin();               // Here iter will point to begining of vec1
    vec1.insert(iter,25);           // It inserts 522 at the beginning
    display(vec1);

    iter=vec1.begin();
    vec1.insert(iter+2,156);         // It inserts 156 at 3rd position from beginning
    display(vec1);

    iter=vec1.begin();
    vec1.insert(iter+2,10,869);       // insert ten 869 at 
    display(vec1);

    return 0;
}