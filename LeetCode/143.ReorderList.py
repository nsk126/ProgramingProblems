from collections import deque
from typing import Optional
# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        """
        Do not return anything, modify head in-place instead.
        """
        newhead = head
        de = deque()
        de.append(head.val)
        while head.next:
            head = head.next
            de.append(head.val)

        while len(de) > 0:
            front = de.popleft()
            newhead.val = front
            if not de:
                break
            # ll.next = ListNode()
            newhead = newhead.next

            back = de.pop()
            newhead.val = back
            if not de:
                break
            # ll.next = ListNode()
            newhead = newhead.next

        head = newhead
