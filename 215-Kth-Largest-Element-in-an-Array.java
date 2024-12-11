class Solution {
    public int findKthLargest(int[] nums, int k) {
        // Create a min-heap using PriorityQueue in Java
        PriorityQueue<Integer> minHeap = new PriorityQueue<>();

        // Iterate over all elements in the array
        for (int num : nums) {
            // Add the current number to the min-heap
            minHeap.add(num);

            // If the heap size exceeds k, remove the smallest element
            // This ensures the heap size stays at k
            if (minHeap.size() > k) {
                minHeap.poll();
            }
        }

        // The root of the heap is the kth largest element
        return minHeap.peek();
    }
}