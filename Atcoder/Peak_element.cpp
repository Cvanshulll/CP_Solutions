class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
      /* *****       Linear Search -> O(N)      ***** */  

        int left = 0;
        while (arr[left] < arr[left+1]) 
        {
            left++;
        }
        return left;
        
        
        /* *****       Binary Search -> O(logN)      ***** */
        
        // int s=0;
        // int e = arr.size()-1;
        // int mid = s+ (e-s)/2;
        // while(s<e)
        // {
        //     if(arr[mid]<arr[mid+1])
        //     {
        //         s = mid+1;
        //     }
        //     else 
        //     {
        //         e = mid;
        //     }
        //     mid = s+ (e-s)/2;
        // }
        // return s;
    }
};