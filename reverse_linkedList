class Solution {
    public ListNode reverseList(ListNode head) {
        ListNode cur=head,prev=null,aage=null;   //aage pointer helps to move cur forward after changing  cur.next= prev  , because we can't access next element by cur.next node  after changing the direction of next pointer

        while(cur!=null){
            aage=cur.next;  // keep address of cur ka aage wala node
            
            cur.next=prev; // change the direction of pointer
            prev=cur;   // move forward
            cur= aage; // move forward and repeat 
        }
        head=prev;  // finally cur becomes null and prev points to last element so make that head and the LL is reversed
        return head;
        
    }
}
