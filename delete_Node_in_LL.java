class Solution {
    public void deleteNode(ListNode node) {
        node.val=node.next.val;  // you can't delete a node directly so make it look like its deleted , copy next node's data -
        node.next=node.next.next;  //into current node which is to be deleted and skip pointer to next node
    }
}
