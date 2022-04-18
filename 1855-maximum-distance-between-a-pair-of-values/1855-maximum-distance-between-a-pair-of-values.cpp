class Solution {
public:

int maxDistance(vector<int>& nums1, vector<int>& nums2) {
    int ans = 0;
    
    int n = nums1.size();
    int m = nums2.size();
    
    for(int i = 0 ; i < n ; i++){
        int low  = i;
        int high = m - 1;
        int value = i;
        
        while(low <= high){
            int mid = (low + high) / 2;
            
            if(nums2[mid] >= nums1[i]){
                low = mid + 1;
                value = mid;
            }else{
                high = mid - 1;
            }
        }
        
        ans = max(ans , value - i);
    }
    
    return ans;
}
};