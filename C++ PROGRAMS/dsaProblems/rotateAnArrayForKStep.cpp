#include <vector>
using namespace std;

class Solution {
public:
    void reverse(vector<int>& nums, int l, int r) {
        //Brute Force Method But It Is Slow
        // int n = nums.size();
        // k = k % n;   // handle large k

        // for (int step = 0; step < k; step++) {
        //     int last = nums[n - 1];

        //     // shift elements to the right
        //     for (int i = n - 1; i > 0; i--) {
        //         nums[i] = nums[i - 1];
        //     }

        //     nums[0] = last;
        // }


        while (l < r) {
            swap(nums[l], nums[r]);
            l++;
            r--;
        }
    }

    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        reverse(nums, 0, n - 1);
        reverse(nums, 0, k - 1);
        reverse(nums, k, n - 1);
    }
};
