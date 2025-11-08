 //to solve this remember (The length from head to cycle start node will be always equal to length from both pointers meeting point to cycle start )
 // so after finding the meeting point of  fast and slow , if we reset any one pointer to head (leave other pointer to meeting point only), and move both pointers only
 //one step until they meet , then this time the meeting point will be the cycle start . in example 1 cycle start is 2.
public class Solution {
    public ListNode detectCycle(ListNode head) {
        ListNode slow=head,fast=head;
        while(fast!=null && fast.next!=null){
            slow=slow.next;
            fast=fast.next.next;

            if(slow==fast){
                fast=head;

                while(fast!=slow){
                    fast=fast.next;
                    slow=slow.next;
                }
            
            return slow;
            }  //if ends here
            
        }  // first while loop ends here
        return null;
    }
    
}

    
