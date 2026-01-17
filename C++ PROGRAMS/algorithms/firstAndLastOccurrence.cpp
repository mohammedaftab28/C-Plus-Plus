// //algo

// ### **Algorithm (Binary Search for First & Last Position) **

// 1. **First occurrence (`firstTerm`) dhundhna**:

//    * `low = 0`, `high = n-1`, `ans = -1` set karo.
//    * Jab tak `low <= high`:

//      * `mid = low + (high - low)/2` calculate karo.
//      * Agar `nums[mid] == target`:

//        * `ans = mid` update karo aur left me search karo: `high = mid - 1`.
//      * Agar `nums[mid] < target`: right me jao → `low = mid + 1`.
//      * Else left me jao → `high = mid - 1`.
//    * `ans` return karo.

// 2. **Last occurrence (`lastTerm`) dhundhna**:

//    * Same steps, lekin jab `nums[mid] == target`, right me move karo: `low = mid + 1`.

// 3. **Result combine karo**:

//    * Agar `first == -1` → target nahi mila → return `{-1, -1}`
//    * Else → return `{first, last}`

// ---

// ✅ **Time Complexity:** O(log n)
// ✅ **Space Complexity:** O(1)



//code

// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//         int first = firstTerm(nums, target);
//         if (first == -1) return {-1, -1};
        
//         int last = lastTerm(nums, target);
//         return {first, last};  
//     }

//     int firstTerm(vector<int>& nums, int target){
//         int low = 0, high = nums.size() - 1;
//         int ans = -1;

//         while(low <= high){
//             int mid = low + (high - low) / 2;

//             if(nums[mid] == target){
//                 ans = mid;          // FIX 1
//                 high = mid - 1;     // move left
//             }
//             else if(nums[mid] < target){
//                 low = mid + 1;
//             }
//             else{
//                 high = mid - 1;
//             }
//         }
//         return ans;
//     }

//     int lastTerm(vector<int>& nums, int target){
//         int low = 0, high = nums.size() - 1;
//         int ans = -1;

//         while(low <= high){
//             int mid = low + (high - low) / 2;

//             if(nums[mid] == target){
//                 ans = mid;          // FIX 1
//                 low = mid + 1;      // move right
//             }
//             else if(nums[mid] < target){
//                 low = mid + 1;
//             }
//             else{
//                 high = mid - 1;
//             }
//         }
//         return ans;
//     }
// };
