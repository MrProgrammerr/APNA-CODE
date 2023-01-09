#include <bits/stdc++.h>
using namespace std;

int main()
{
    //------------------------- SET CONTAINER ---------------------------
    // Stores unique datas in ascending order.
    // set<int> st; // Creates a set "st"
    // st.insert(element);  // Insert the unique element and maintain ascending order
    // st.emplace(element)  // Does same thing but a bit faster
    // st.erase(iterator);  // Delete the Value at which iterator is pointing
    // st.erase(iter1,iter2);// Delete the Values inside iter1 to iter2 excluding iter2
    // st.erase(key);       // Delete the "key" from st
    // st.find(key);        // Returns an iterator pointing to "key", if key is absent it returns end iterator(st.end())
    // st.size();           // Returns the length of st
    // st.clear();          // Deletes all the values.
    // set<int> st;
    // int size, val;
    // cout << "Enter the size : ";
    // cin >> size;
    // cout << "Enter the values : ";
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> val;
    //     st.insert(val); // Stores unique elements in ascending order
    // }
    // for (auto it : st) // Can't access like st[index]
    // {
    //     cout << it << "\t";
    // }
    // for (auto it = st.begin(); it != st.end(); it++)
    // {
    //     cout << *it << "\t";
    // }
    //------------------------ UNORDEERD SET ----------------------------
    // unordered_set<int> st2; // It doesn't maintain ascending order but stores unique elements.

    //----------------------------- MULTISET ----------------------------
    // multiset<int> ms; // Creates a multiset named as "ms"
    // ms.insert(ele);   // Stores elements (NOT UNIQUE) in ascending order.
    // ms.erase(ele);    // Deletes all instances of ele.
    // ms.find(ele);     // Returns the first position where ele is present
    // ms.clear();       // Delete all elements.
    // multiset<int> ms;
    // ms.insert(1);
    // ms.insert(3);
    // ms.insert(2);
    // ms.insert(5);
    // ms.insert(4);
    // ms.insert(4);
    // ms.insert(4);
    // for (auto it : ms)
    // {
    //     cout << it << "\n";
    // }

    //--------------------------- MAP CONTAINER -----------------------------
    // This is similiar to Distionary and maintain ascending(lexicographic) order acc. to key.
    // Key      Value
    // chandan   10
    // badal     20
    // priya     30
    // map<string , int> mp;
    // mp["key_name"] = value       // inserts "value" with key "key_name"
    // mp.emplace("key_name",value);        // Does same thing
    // mp.erase("key_name");                // Delete the key and value with key_name
    // mp.erase(mp.begin());                // Delete the first element
    // mp.erase(mp.begin(),mp.begin()+3);   // Delete the elements in that range
    // mp.clear();                          // Delete the map
    // mp.find("key_name");                 // Returns the iterator pointing to that key_name value
    //                                         if not present then returns the end iterator.
    // mp.empty();                          // Returns the boolean value
    // mp.count("key_name");                // Always returns 1 as it stores unique keys
    // map<string, int> mp;
    // mp["chandan"] = 10;
    // mp["badal"] = 20;
    // mp["priya"] = 30;
    // mp["chandan"] = 40; // It will override
    // mp.emplace("swastik", 50);
    // mp.erase("swastik");
    // for (auto it : mp)
    // {
    //     cout << it.first << " " << it.second << endl;
    // }
    // cout << endl;
    // for (auto it = mp.begin(); it != mp.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }

    //--------------------------- UNORDERED MAP CONTAINER -----------------------------
    // Doesn't store in order but uique keys.
    // unordered_map<string,int> ump;

    //--------------------------- MULTIMAP CONTAINER -----------------------------
    // Stores in order but not unique keys
    // multimap<string,int> mpp;
    // mpp.emplace("ckn",10);
    // mpp.emplace("ckn",20);// won't override

    //--------------------------- PAIR CLASS -----------------------------
    // pair<int, int> pr1 = {1, 2};
    // cout << pr1.first << "  " << pr1.second << endl;
    // pair<pair<int, int>, int> pr2 = {{3, 4}, 5};
    // cout << pr2.first.first << "  " << pr2.first.second << "  " << pr2.second << endl;
    // pair<pair<int, int>, pair<int, int>> pr3 = {{6, 7}, {8, 9}};
    // cout << pr3.first.first << "  "
    //      << pr3.first.second << "  "
    //      << pr3.second.first << "  "
    //      << pr3.second.second << endl;

    //----------------------------- STACK -------------------------------
    // stack<int> stk; // Creates an empty stack
    // stk.push(val);  // Inserts "val" at the top
    // stk.top();      // Returns value present at the top
    // stk.pop();      // Deletes the value at top
    // stk.size();     // Returns the size of stack
    // stack<int> st;
    // st.push(9);
    // st.push(4);
    // st.push(3);
    // st.push(1);
    // while (!st.empty())
    // {
    //     cout << st.top() << endl;
    //     st.pop();
    // }

    //----------------------------- QUEUE -------------------------------
    // queue<int> q;
    // q.push(1);
    // q.push(2);
    // q.push(3);
    // q.push(4);
    // q.push(5);
    // cout<<q.front()<<"\n";
    // cout<<q.back()<<"\n";
    // q.pop();
    // cout<<q.front()<<"\n";
    // while(!q.empty())
    // {
    //     q.pop();
    //     cout<<q.front()<<"\n";
    // }

    //----------------------------- PRIORITY QUEUE ------------------------------
    // It is like stack and stores all the elements(Not necessaryly unique) in sorted order i.e always max / min
    // element at the top.
    // priority_queue<int> mxpq; // Creates a Maximum priority queue named as "mxpq" i.e it stores max at the top
    // mxpq.push(1);
    // mxpq.push(3);
    // mxpq.push(2);
    // mxpq.push(5);
    // mxpq.push(4);
    // mxpq.push(4);
    // mxpq.push(4);
    // while (!mxpq.empty())
    // {
    //     cout << mxpq.top() << "\n";
    //     mxpq.pop();
    // }
    // cout << "\n";
    // priority_queue<int, vector<int>, greater<int>> mnpq; // Creates a Minimum priority queue named as "mnpq" i.e
    // mnpq.push(4);                                        // it stores min at the top.
    // mnpq.push(4);
    // mnpq.push(4);
    // mnpq.push(5);
    // mnpq.push(2);
    // mnpq.push(3);
    // mnpq.push(1);
    // while (!mnpq.empty())
    // {
    //     cout << mnpq.top() << "\n";
    //     mnpq.pop();
    // }

    //----------------------------- DEQUEUE ------------------------------
    // It is the queue in which we can insert and delete data from either front or back.
    // It's functions are similiar to Vector
    // deque<int> dq;
    // dq.push_front();
    // dq.push_back();
    // dq.pop_front();
    // dq.pop_back();
    // begin , end , rbegin , rend
    // size
    // clear
    // empty

    //----------------------------- LIST ------------------------------
    // It is nothing but the doubly ended linked list and has same functionalities as dequeue
    // list<int> ls;
    // ls.push_front();
    // ls.push_back();
    // ls.pop_front();
    // ls.pop_back();
    // begin , end , rbegin , rend
    // size
    // clear
    // empty

    // Applications -->
    
    // To find maximum frequency element from a given number of elements
    // int size, max = 0, val;
    // cin >> size;
    // unordered_map<int, int> mp; // As it has less time complexity
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> val;
    //     mp[val]++;
    //     if(mp[val]>mp[max])
    //         max=val;
    // }
    // cout<<max;

    // TO Take any number of input and print them in sorted order
    // multiset<int> ms;
    // int size,ele;
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //      cin>>ele;
    //      ms.emplace(ele);
    // }
    // for(auto it : ms)
    // {
    //     cout<<it<<"  ";
    // }
    // cout<<endl;
    

    return 0;
}