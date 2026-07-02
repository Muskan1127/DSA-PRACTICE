#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int result = 0;
    for (int num : nums) {
        result ^= num; // XOR operation to find the unique number
    }
    return result;
}
int main() {
    vector<int> nums = {4, 9, 2, 1 ,5, 2, 1, 4, 5};
    cout << "The single number is: " << singleNumber(nums) << endl;
    return 0;
}