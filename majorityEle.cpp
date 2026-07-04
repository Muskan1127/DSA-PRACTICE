#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int majorityElement(vector<int>& nums) {
    int count = 0;
    int candidate = 0;

    for (int num : nums) {
        if (count == 0) {
            candidate = num;
        }
        count += (num == candidate) ? 1 : -1;
    }

    return candidate;
}

int main() {
    vector<int> nums = {3, 2, 3,2,2,2,3,3,2,3,2,2,3,3,2,3,2,3,2,3,2,2,3,3,3,3,2,2,2,2,3,3,2,3,3,2,2,};
    cout << "The majority element is: " << majorityElement(nums) << endl;
    return 0;
}