# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def reverseList(self, head:[ListNode]) -> [ListNode]:

        p, c = None, head
        while c:
            # c - head of current ll
            # store next pointer of c
            # flip next pointer to p i.e change direction
            # assign c to p
            # make current c the stored next pointer
            # repeat till the next pointer is null
            nxt = c.next
            c.next = p
            p = c
            c = nxt
        return p


head = [1,2,3,4,5]

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

head2 = create_linked_list(head)
print_linked_list(head2)
s = Solution()
print_linked_list(s.reverseList(head2))

