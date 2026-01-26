// //algo

// 1. Initialize `low = 0`, `high = arr.size() - 1`.
// 2. While `low < high`:

//    * Compute `mid = low + (high - low)/2`.
//    * If `arr[mid] < arr[mid + 1]`, move right: `low = mid + 1`.
//    * Else, move left: `high = mid`.
// 3. Return `low` (or `high`), which is the **peak index**.

// ✅ **Time Complexity:** O(log n)
// ✅ **Space Complexity:** O(1)


// code

// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//     int low = 0;
//     int high = arr.size() - 1;
//     while (low < high){
//         int mid = low + (high - low)/2;
//         if (arr[mid] < arr[mid + 1]){
//             low = mid + 1;
//         }
//         else{
//             high = mid;
//         }
//     }  
//     return high;  
//     }
// };
