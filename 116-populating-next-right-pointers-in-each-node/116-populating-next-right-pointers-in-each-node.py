"""
# Definition for a Node.
class Node(object):
    def __init__(self, val=0, left=None, right=None, next=None):
        self.val = val
        self.left = left
        self.right = right
        self.next = next
"""

class Solution(object):
    def connect(self, root):
        """
        :type root: Node
        :rtype: Node
        """
        def connect2Node(left, right):
            if not left or not right: return
            left.next = right
            connect2Node(left.left, left.right)
            connect2Node(right.left, right.right)
            connect2Node(left.right, right.left)
        #base case
        if not root: return None
        connect2Node(root.left, root.right)
        return root
        