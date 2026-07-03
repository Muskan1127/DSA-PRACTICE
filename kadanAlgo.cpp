#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int kadane(vector<int>& nums) {
    int currentSum = 0;
    int maxSum = INT_MIN;

    for (int num : nums) {
        currentSum += num;

        maxSum = max(maxSum, currentSum);

        if (currentSum < 0)
            currentSum = 0;
    }

    return maxSum;
}

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << "Maximum Subarray Sum = " << kadane(nums);

    return 0;
}