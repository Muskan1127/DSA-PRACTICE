#include <iostream>
using namespace std;

int main(){
    int nums[]={96,77,83,02,736,376,-36,2573};
    int size =8;

    int largest = INT_MIN;

    for(int i=0; i<size; i++){
        largest = max(largest, nums[i]);
    }
    cout << "Largest element: " << largest << endl;
    return 0;
}