class Solution {
    public boolean isPalindrome(ListNode head) {
        ListNode fast=head,slow=head;
        while(fast!=null && fast.next!=null){        //first we will find the mid of the linked list
            slow=slow.next;
            fast=fast.next.next;
        }
        ListNode aage=null,prev=null,curr=slow;     // after getting middle we will reverse the LL from the middle node i.e where the slow pointer points.
        while(curr!=null){
            aage=curr.next;
            curr.next=prev;
            prev=curr;         // this part of code is same as ll reversal check from there 
            curr=aage;
        }
        ListNode head2=prev;   // after reversing make the tail node of the reversed part as head2
        while(head2!=null){            // in while only head2 is used Because the second half (reversed) is usually shorter or equal, and we just need to compare all of it. 
            if(head.val==head2.val){
            head=head.next;
            head2=head2.next; }
            else return false;   // if value not equal then not palindrome loop breaks and false is returned 

            
        }
        return true;
    }
}
