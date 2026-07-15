#include <iostream>
#include <vector>
using namespace std;

    int maxArea(vector<int>& height) {
        int ans = 0;

        for(int i = 0; i < height.size(); i++) {
            for(int j = i + 1; j < height.size(); j++) {

                int width = j - i;
                int h = min(height[i], height[j]);

                ans = max(ans, width * h);
            }
        }
         return ans;
};

int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7,4,4,3,2,7,1,2,3,4,5,6,7,8,9};

    cout << maxArea(height);

    return 0;
}