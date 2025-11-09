class Solution {
    public ListNode deleteMiddle(ListNode head) {
        if(head.next==null){ 
            head=head.next; 
            return head; }           //edge case for single node
        
        ListNode slow=head,fast=head,prev=null;
        
        while(fast!=null && fast.next!=null){
            prev=slow;                              // prev will point just before middle node
            slow=slow.next;                         //slow will point to middle node
            fast=fast.next.next;

        }
        prev.next=prev.next.next;                //skip the next pointer to middle node 
        return head; 
    }
}
