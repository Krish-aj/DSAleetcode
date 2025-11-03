class Solution {
    public ListNode middleNode(ListNode head) {
        ListNode fast=head, slow=head;
        while(fast!=null && fast.next!=null){ // while revising figure out why and operator is used
            slow=slow.next;
            fast=fast.next.next;

        }
        return slow;
    }
}
