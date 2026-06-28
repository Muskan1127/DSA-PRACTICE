#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int target){
    int start = 0;
    int end = arr.size()-1;

    while(start<=end){
        int mid = start + (end-start)/2;

        if(arr[mid] < target){
            start= mid +1;
        }
        else if(arr[mid] > target){
            end = mid - 1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main(){
    vector<int> arr1 = {-1, 0, 3, 5, 9, 12};
    int tar1 = -1;

    cout << "Index of " << tar1 << " is: " << binarySearch(arr1, tar1) << endl;

   vector<int> arr2 = {-1, 0,3,4,5,9,61,74,140};
    int tar2 = 5; 

    cout << "Index of " << tar2 << " is: " << binarySearch(arr2, tar2) << endl;
}