class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> lastIndex(26, 0); // Stores the last occurrence index of each character
        
        // Step 1: Store the last occurrence index for each character
        for(int i = 0; i < s.size(); i++) {
            lastIndex[s[i] - 'a'] = i;
        }
        
        vector<int> partitions;
        int maxLastIndex = 0, partitionStart = 0;
        
        // Step 2: Iterate and form partitions
        for(int i = 0; i < s.size(); i++) {
            maxLastIndex = max(maxLastIndex, lastIndex[s[i] - 'a']); // Track farthest last occurrence
            
            if(maxLastIndex == i) { // Found a partition
                partitions.push_back(i - partitionStart + 1); // Store partition size
                partitionStart = i + 1; // Move to the next partition
            }
        }
        
        return partitions;
    }
};