/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
import java.util.Vector;

class Solution {
    public TreeNode balanceBST(TreeNode root) {
        if (root == null)
            return root;
        Vector<TreeNode> nodes = new Vector<>();
        traverseNode(root, nodes);
        return makeTree(nodes, 0, nodes.size() - 1);
    }

    public TreeNode makeTree(Vector<TreeNode> nodes, int start, int end) {
        if (start > end) {
            return null;
        }
        int mid = (start + end) / 2;
        TreeNode treeNode = nodes.get(mid);
        treeNode.left = makeTree(nodes, start, mid - 1);
        treeNode.right = makeTree(nodes, mid + 1, end);
        return treeNode;
    }

    public void traverseNode(TreeNode root, Vector<TreeNode> nodes) {
        if(root == null)
            return;
        traverseNode(root.left, nodes);
        nodes.add(root);
        traverseNode(root.right, nodes);
    }
}