#include <iostream>
using namespace std;

int main(){
    int nums[]={96,77,83,02,736,376,-36,2573};
    int size =8;

    int smallest = INT_MAX;
    
    for(int i=0; i<size; i++){
        if(nums[i] < smallest){
            smallest = nums[i];
        }
    }
    cout << "Smallest element: " << smallest << endl;
    return 0;
}