#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v1= {1,2,3,4,5};
    //We can also initialize a vector like this.
    vector<int>v2(5);
    //We can also declare a vector like this.
    v2[0]=1;
    v2[1]=2;
    for(int i=0; i<v2.size(); i++) {
        cout<<v2[i]<<" ";
    }
    cout << endl;
    vector<int>v;
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    v.push_back(10);
    v.push_back(11);
    //v.clear() clear all elements from the vector.
    for(int i=0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"Using erase() method"<<endl;
    v.erase(v.begin());
    //Here v.begin() points the 0th index in vector
    for(int i=0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"Using pop_back() method:"<<endl;
    v.pop_back();
    for(int i=0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout << "Front,back,at and empty use:" << endl;
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    cout<<v.empty()<<endl;
    //0 means false and 1 means true
    cout << endl;
    cout << "Iterator in Vector" << endl;
    cout << ".begin(),.end()" << endl;
    cout << ".begin() points the 0th index of vector" << endl;
    cout << ".end() points the vector (size+1)th index" << endl;
    cout << "Use of iterator in vector:" << endl;
    for(auto i=v.begin(); i<v.end(); i++) {
        cout<<*i<<" ";
    }
    cout<<endl;
    //vectorname.rbegin() and vectorname.rend() are alse two
    //pointers.they are reverse.
    cout << "Sorting in vector" << endl;
    vector<int>vv= {6,3,5,1,4,2};
    //sort(v.begin(),v.end)
    sort(vv.begin(),vv.end());
    for(int i=0; i<vv.size(); i++) {
        cout<<vv[i]<<" ";
    }
    cout<<endl;
    cout << "Decreasing order sorting:" << endl;
    sort(vv.begin(),vv.end(),greater<int>());
    for(int i=0; i<vv.size(); i++) {
        cout<<vv[i]<<" ";
    }
    cout<<endl;
    cout << "Vector capacity:" << endl;
    cout<<"Capacity of vv Vector:"<<vv.capacity()<<endl;
    cout<<endl;
    cout << "Insert a value in particular index:" << endl;
    vv.insert(vv.begin()+2,50);
    for(int i=0; i<vv.size(); i++) {
        cout<<vv[i]<<" ";
    }
    cout<<endl;
    vector<int>vvv= {1,2,3};
    vector<int>vvvv;
    vvvv=vvv;
    cout << "Copy one vector elements to another:" << endl;
    for(int i=0; i<vvvv.size(); i++) {
        cout<<vvvv[i]<<" ";
    }
    cout<<endl;
    cout<<"Using enhanced for loop:"<<endl;
    vector<int>vvvvv= {1,2,3,4,5,6,7,8,9};
    for(auto i: vvvvv)
        cout<<vvvvv[i]<<" ";
    cout<<endl;
    cout << "Binary Search in Vector" << endl;
    cout<<binary_search(vvvvv.begin(),vvvvv.end(),4);
    cout<<endl;
    cout << "Find index of particular element in vector" << endl;
    cout<<find(vvvvv.begin(),vvvvv.end(),5)-vvvvv.begin()<<endl;
    cout<<"Count elements in vector"<<endl;
    vector<int>v2v= {11,67,23,11,89,11,90};
    cout<<"Here count 11 is:"<<endl;
    cout<<count(v2v.begin(),v2v.end(),11)<<endl;
    //cout << "Max element in vector:" << endl;
    //cout<<max_element(v2v.begin(),v2v.end())<<endl;
    return 0;
}
