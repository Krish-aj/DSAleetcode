class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode count=head,prev=head;
        int size=0;
    
    //edge case for n==1(to remove tail node)
        if(n==1){
            while(count.next!=null){  //traverse to the tail keeping prev behind the tail
                prev=count;
                count=count.next;
            }
            if(head.next==null){    // if only head node present then make it null
                head=head.next;
                
            }else{ prev.next=null; }  //else make last node null
            
            return head;
        }

    //count the size of LL
        while(count!=null){ 
            count=count.next;
            size++;
        }

    //edge case for n==size(to remove head node)
         if(n==size){
            head=head.next; //just move head one step forward
            return head;
        }

    //case for any middle node(n!= 1 && n != size)
        count=head;
        for(int i=0;i<size-n;i++){  //move forward until count points to the node to be deleted and prev is just behind it 
            prev=count;
            count=count.next;
        }
        prev.next=prev.next.next;  //then delete the node 
        return head;
    }
}
