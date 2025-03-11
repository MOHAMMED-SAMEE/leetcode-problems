class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
         std::unordered_map<int, int> freq;
        std::vector<int> result;

        // Count occurrences of elements in nums1
        for (int num : nums1) {
            freq[num]++;
        }

        // Find the intersection based on frequency
        for (int num : nums2) {
            if (freq[num] > 0) {
                result.push_back(num);
                freq[num]--;  // Reduce count to handle duplicates correctly
            }
        }

        return result;
    }
};