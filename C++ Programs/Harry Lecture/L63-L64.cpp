#include <iostream>
using namespace std;

//---------------------- TEMPLATES IN C++ --------------------
/*
 * Syntax:
 *
 *        template <class T>
 *        class vector{
 *                  T * arr;
 *                  public:
 *                     vector(T *ar)
 *                          {
 *                              //code
 *                          }
 *                     }
 *
 *        int main()
 *        {
 *          vector<int> myvec(ptr);
 *          vector<float> myfvec(ptr1);
 *        }
 */

// class vector
// {
//     public:
//     int size,*arr;
//     vector(int m)
//     {
//         size=m;
//         arr=new int[size];
//     }
//     int dotProduct(vector v)
//     {
//         int d=0;
//         for(int i=0;i<size;i++)
//         {
//             d+= this->arr[i]*(v.arr[i]);
//         }
//         return d;
//     }
// };

template <class T>         // Only work for Vector Class
class vector               // For different clases, we have to write different template just before it
{
public:
    int size;
    T *arr;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotProduct(vector v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * (v.arr[i]);
        }
        return d;
    }
};

int main()
{
    // vector v1(3);
    // v1.arr[0]=4;
    // v1.arr[1]=3;
    // v1.arr[2]=1;

    // vector v2(3);
    // v2.arr[0]=1;
    // v2.arr[1]=0;
    // v2.arr[2]=1;

    // cout<<"Dot Product : "<<v1.dotProduct(v2);

    vector<float> v1(3);
    v1.arr[0] = 1.4;
    v1.arr[1] = 3.3;
    v1.arr[2] = 0.1;

    vector<float> v2(3);
    v2.arr[0] = 0.1;
    v2.arr[1] = 1.90;
    v2.arr[2] = 4.1;

    cout << "Dot Product : " << v1.dotProduct(v2);

    return 0;
}