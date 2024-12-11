public class Solution {
    public boolean threeConsecutiveOdds(int[] arr) {
        StringBuilder binaryString = new StringBuilder();
        for (int num : arr) {
            binaryString.append(num % 2);
        }
        return binaryString.toString().contains("111");
    }
}