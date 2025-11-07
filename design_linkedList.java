class MyLinkedList {

    private class node{          // in java inner class is used to initialize a node
        int val;
        node next;
        node(int val){this.val=val;}   // this is a constructor for class node  , next is by default set to null.
    }



     private node head;   //these are set private so it can't be accessed from outside the class and can only be accessed by member functions(c++) or methods in java)
     private int size;

    public MyLinkedList() {      // this is a constructer for the class Mylinked list
        head=null;
        size=0;
    }
    
    public int get(int index) {
        if(index<0 ||index>=size) return -1;
        int i=0;
        node temp=head;
        while(i<index){
            temp=temp.next;
            i++;
        }
        return temp.val;
    }
    
    public void addAtHead(int val) {
        node newnode=new node(val);    //this this like creating an object named  newnode  which saves data as --> [ val = val | next = null ]

        newnode.next=head;
        head=newnode;
        size++;
    }
    
    public void addAtTail(int val) {
        if(head==null){addAtHead(val); return;}  //case 1
        
        node temp=head;                  //case 2
        while(temp.next!=null){
            temp=temp.next;
        }
        node newnode=new node(val);
        temp.next=newnode;
        size++;

    }
    
    public void addAtIndex(int index, int val) {
        if (index>size) return;                         //case 1
        if(index==size){addAtTail(val); return;}        //case 2
        if(index<=0){addAtHead(val); return;}           //case 3


        node temp=head,prev=null;                       //case 4
        int i=0;
        while(i<index-1){
            
            
            temp=temp.next;
            i++;
        }
        node newnode=new node(val);
        newnode.next=temp.next;
        temp.next=newnode;
        size++;

    }
    
    public void deleteAtIndex(int index) {
        if(index<0 || index>=size) return;    //case 1


        node temp=head;                  
        int i=0;
        if(index==0){head=head.next;}       //case  2
        else{                               // case 3
        while(i<index-1){
            temp=temp.next;
            i++;
        }
        temp.next=temp.next.next;
        }
        size--;
        
    }  // note: temp is a pointer not integer like index so to reach index , temp.next has to be done index times using loop 
}

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList obj = new MyLinkedList();
 * int param_1 = obj.get(index);
 * obj.addAtHead(val);
 * obj.addAtTail(val);
 * obj.addAtIndex(index,val);
 * obj.deleteAtIndex(index);
 */
