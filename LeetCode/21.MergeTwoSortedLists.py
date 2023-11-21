from typing import Optional

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:

        point_next = ListNode()
        pp = point_next

        while list1 and list2:
            if list1.val < list2.val:
                pp.next = list1
                list1 = list1.next
            else:
                pp.next = list2
                list2 = list2.next
            pp = pp.next

        if list1:
            pp.next = list1
        elif list2:
            pp.next = list2

        return point_next.next

s = Solution()
list1 = [1,2,4]
list2 = [1,3,4]

def create_linked_list(elements):
    head = ListNode(elements[0])
    current = head
    for val in elements[1:]:
        current.next = ListNode(val)
        current = current.next
    return head
def print_linked_list(head):
    current = head
    while current:
        print(current.val, end=" -> ")
        current = current.next
    print("None")

head1 = create_linked_list(list1)
head2 = create_linked_list(list2)


a = s.mergeTwoLists(head1, head2)
print_linked_list(a)