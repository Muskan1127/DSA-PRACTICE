#include <iostream>
using namespace std;

int main(){
    int size = 5;
    int marks[size];
    
    cout<< "Enter marks" << endl;
    for(int i=0 ;i<size;i++){
        cin >> marks[i];
    }

    cout<< "Marks of students: " << endl;
    for(int i=0 ;i<size;i++){
        cout << "Student " << i+1 << ": " << marks[i] << endl;
    }

    return 0;
}