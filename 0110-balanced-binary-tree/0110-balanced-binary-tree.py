# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def isBalanced(self, root):
        def blah(node):
            if node==None:
                return 0
        
            lh = blah(node.left)
            rh = blah(node.right)
            if(abs(rh-lh)>1):
                return -1
            
            if(lh==-1 or rh==-1):
                return -1

            return 1+max(lh,rh)
        
        if(blah(root)==-1):
            return False
        else:
            return True
        
        