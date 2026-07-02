#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;

    cout << "size : " << vec.size() << endl; //size returns the number of elements in the vector

    vec.push_back(1); //push_back adds an element to the end of the vector
    vec.push_back(5); 
    vec.push_back(10);
    vec.push_back(20);

    cout << "After push_back size : " << vec.size() << endl;

    vec.pop_back(); //pop_back removes the last element of the vector

    cout << "After pop_back size : " << vec.size() << endl;

    cout<< vec.front() << endl; //front returns the first element of the vector
    cout << vec.back() << endl; //back returns the last element of the vector

    cout<<vec.at(1) << endl; //at returns the element at the specified index
    cout << endl;

    return 0;
}