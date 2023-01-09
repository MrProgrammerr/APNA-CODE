#include <bits/stdc++.h>
using namespace std;

int main()
{
    //------------------------------------ BITSET CONTAINER ------------------------------------
    // Its size is only 1 bit. and stores only 1 or 0
    /*
        Here index is counted from right to left
    */
    // bitset<n> bt;      // Declares array of size n of type bitset
    // bitset<5> bt;
    // cin >> bt;      // Ex : 11111
    // bt.all();       // returns true if all bits are 1 and false if any one is 0
    // bt.any();       // returns true if any bit is 1 and false if all the bits are 0
    // bt.count();     // returns the number of ones in bt
    // bt.flip();      // turns all the bits to 1 if 0 is present and 0 if 1 is present
    // bt.flip(i);     // turns the value at index i to 1 if 0 is present and 0 if 1 is present
    // bt.none();      // returns true only if all the bits are 0. If any one is 1 then gives false
    // bt.set();       // It converts all the bits to 1
    // bt.set(i);      // It converts ith index bit to 1
    // bt.set(i,0);    // It converts ith index bit to 0
    // bt.reset();     // It converts all the bits to 0
    // bt.reset(i);    // It converts ith index bit to 0
    // bt.size();      // It returns the size of bitset bt
    // bt.test(i);     // Checks if ith index bit is 1 or not
    // bitset<5> bt;
    // cin >> bt;
    // cout<<bt.all()<<endl;
    // cout<<bt.any()<<endl;
    // cout<<bt.count()<<endl;
    // cout<<bt.flip(3)<<endl;
    // cout<<bt.flip(3)<<endl;
    // cout<<bt.none()<<endl;
    // cout<<bt.set()<<endl;
    // cout<<bt.set(3)<<endl;
    // cout<<bt.set(4,0)<<endl;
    // cout<<bt.reset()<<endl;
    // cout<<bt.reset(1)<<endl;
    // cout<<bt.size()<<endl;
    // cout<<bt.test(0)<<endl;

    // --------------------------------------- ALGORITHMS ----------------------------------------
    // SORTING :-
    // sort(begin_iterator , end_iterator);
    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // sort(arr, arr + n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << "  ";
    // }

    // vector<int> vec;
    // for (int i = 0; i < n; i++)
    // {
    //     int ele;
    //     cin >> ele;
    //     vec.emplace_back(ele);
    // }
    // sort(vec.begin(),vec.end());
    // for (int i = 0; i < n; i++)
    // {
    //     cout << vec[i];
    // }

    // REVERSE :-
    // reverse(begin_iterator , end_iterator);
    // reverse(arr, arr + n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << "  ";
    // }

    // MAXIMUM/MINIMUM BETWEEN A RANGE :-
    // int max = *max_element(begin_iterator , end_iterator);
    // int min = *min_element(begin_iterator , end_iterator);
    // cout << *max_element(arr, arr + n) << endl;
    // cout << *min_element(arr, arr + n) << endl;

    // SUM OF ALL THE ELEMENTS IN A RANGE :-
    // int sum = accumulate(begin_iterator , end_iterator , initial_sum);
    // cout << accumulate(arr, arr + n, 0);
    // cout << accumulate(arr, arr + n, 10);

    // COUNT THE NUMBER OF TIMES AN ELEMENT IS PRESENT :-
    // int cnt = count(begin_iterator , end_iterator , key);
    // cout << count(arr,arr+n,arr[0]);  // Returns number of times arr[0] is present

    // FIND THE INDEX WHERE AN ELEMENT IS PRESENT FOR THE FIRST TIME :-
    // auto it = find(begin_iterator , end_iterator , key);
    // It returns the index at which the key is occurred for first time . If absent it will return end iterator.
    // auto it = find(arr , arr+n , 4);
    // cout << "Index = " << (it-arr) << endl;   // (it - arr) will give us the index value

    // BINARY SEARCH :-
    // Works on only sorted arrays.
    // bool res = binary_search(begin_iterator , end_iterator , key); // returns true if key is present and false if not
    // bool res = binary_search(arr, arr + n, 4);
    // cout << res;

    // LOWER BOUND FUNCTION :-
    // Works in only sorted arrays
    // It returns an iterator pointing to the first element which is not less than a given value or else returns end
    // auto it = lower_bound(begin_iterator , end_iterator , key);
    // auto it = lower_bound(arr , arr+n , 4);
    // cout << "Index = " << (it-arr) << endl;

    // UPPER BOUND FUNCTION :-
    // Works in only sorted arrays
    // It returns an iterator pointing to the first element just greater than the given element.
    // auto it = upper_bound(arr , arr+n , 4);
    // cout << "Index = " << (it-arr) << endl;

    // Next Permutation :-
    // All permutations of "abc" = abc , acb , bac , bca , cab , cba
    // string str = "bca";
    // bool res = next_permutation(str.begin(), str.end()); // makes str "cab" and rturns true as str is changed
    // cout << res << "  " << str << endl;
    // str = "cba";
    // bool res = next_permutation(str.begin(), str.end()); // str becomes "abc" and rturns false 
    // cout << res << "  " << str << endl;
    // sort(str.begin(), str.end());
    // do
    //     cout << str << "\t";
    // while (next_permutation(str.begin(), str.end()));

    // Previous Permutation :-
    // All permutations of "abc" = abc , acb , bac , bca , cab , cba
    // string str = "bca";
    // bool res = prev_permutation(str.begin(), str.end()); // makes str "bac" and rturns true as str is changed
    // cout << res << "  " << str << endl;
    // str = "abc";
    // bool res = prev_permutation(str.begin(), str.end()); // str becomes "cba" and rturns false
    // cout << res << "  " << str << endl;

    // Questions :-
    // Q1 . find the first index where the element key lies. (find() takes O(N) times)
    // int sz, ele;
    // cout << "Enter the Size : ";
    // cin >> sz;
    // cout << "Enter the Elements : ";
    // vector<int> vec;
    // for (int i = 0; i < sz; i++)
    // {
    //     cin >> ele;
    //     vec.emplace_back(ele);
    // }
    // sort(vec.begin(), vec.end());
    // cout << "Enter the Key Element : ";
    // cin >> ele;
    // auto it = lower_bound(vec.begin(), vec.end(), ele);
    // if (it != vec.end() && *it == ele)
    //     cout << "Index = " << (it - vec.begin());
    // else
    //     cout << "Key is Absent !" << endl;

    // Q2 . Find the last occurence of a given Number.
    // int sz, ele;
    // cout << "Enter the Size : ";
    // cin >> sz;
    // cout << "Enter the Elements : ";
    // vector<int> vec;
    // for (int i = 0; i < sz; i++)
    // {
    //     cin >> ele;
    //     vec.emplace_back(ele);
    // }
    // sort(vec.begin(), vec.end());
    // cout << "Enter the Key Element : ";
    // cin >> ele;
    // auto it = upper_bound(vec.begin(),vec.end(),ele);
    // if(*(it-1)==ele)
    //     cout<<"Index  =  "<<(it-vec.begin()-1);
    // else
    //     cout<<"Index not Found i.e Key is absent !"<<endl;

    // Q3 . Find the Number of times a given number appears
    // int sz, ele;
    // cout << "Enter the Size : ";
    // cin >> sz;
    // cout << "Enter the Elements : ";
    // vector<int> vec;
    // for (int i = 0; i < sz; i++)
    // {
    //     cin >> ele;
    //     vec.emplace_back(ele);
    // }
    // sort(vec.begin(), vec.end());
    // cout << "Enter the Key Element : ";
    // cin >> ele;
    // int fr = upper_bound(vec.begin(), vec.end(), ele) - lower_bound(vec.begin(), vec.end(), ele);
    // cout << "Frequency of " << ele << " = " << fr << endl;

    return 0;
}