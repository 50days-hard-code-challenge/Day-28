class Solution {
    public boolean isValidBST(TreeNode root) {
        return bst(root,Long.MIN_VALUE , Long.MAX_VALUE);
        
    }
    public boolean bst(TreeNode root,long minrange ,long maxrange)
    {
        if(root==null)
        {
            return true;
        }
        if(root.val<=minrange || root.val >= maxrange)
        {
            return false;
        }
        boolean isleftinrange=bst( root.left,minrange ,root.val);
         boolean isrightinrange=bst( root.right ,root.val ,maxrange);
         return isleftinrange && isrightinrange;


    }
}
