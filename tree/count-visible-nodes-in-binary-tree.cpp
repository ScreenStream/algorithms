#include "tree.h"

// https://leetcode.com/discuss/interview-question/546703/Microsoft-or-OA-2020-or-Count-Visible-Nodes-in-Binary-Tree



/*
 * In a binary tree, if in the path from root to the node A, there is no node with greater value than A’s, this node A is visible. We need to count the number of visible nodes in a binary tree.

Example 1:

Input:
        5
     /     \
   3        10
  /  \     /
20   21   1

Output: 4
Explanation: There are 4 visible nodes: 5, 20, 21, and 10.
Example 2:

Input:
  -10
	\
	-15
	   \
	   -1

Output: 2
Explanation: Visible nodes are -10 and -1.
 */

int countVisibleNodes(TreeNode* root) {
    return 0;
}


/*
 * public class Main {
    static class TreeNode {
        int val;

        TreeNode left;
        TreeNode right;

        TreeNode(int val) {
            this.val = val;
        }
    }

    // or, you can simply count the number of visibles without this O(n) space
    static ArrayList<Integer> visible = new ArrayList<>();

    private static void dfs(TreeNode node, int max) {
        if (node == null) {
            return;
        }

        if (node.val >= max) {
            visible.add(node.val);
            max = Math.max(node.val, max);
        }

        dfs(node.left, max);
        dfs(node.right, max);
    }

    public static void main(String[] args) {
        TreeNode root = new TreeNode(5);
        root.left = new TreeNode(3);
        root.right = new TreeNode(10);

        root.left.left = new TreeNode(20);
        root.left.right = new TreeNode(21);

        root.right.left = new TreeNode(1);

        dfs(root, 0);

        System.out.println(Arrays.toString(visible.toArray()));

    }
}
 */