class Solution {
    private void bubbleSort(int[] arr) {
        int n = arr.length;
        for (int i = 0; i < n - 1; ++i) {
            for (int j = 0; j < n - i - 1; ++j) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    public int heightChecker(int[] heights) {
        int[] Heights = heights.clone();
        bubbleSort(Heights);

        int count = 0;
        for (int i = 0; i < Heights.length; ++i) {
                         
            if (heights[i] != Heights[i]) {
                count += 1;
            }
        }
        return count;
    }
}