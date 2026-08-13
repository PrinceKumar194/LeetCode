class MyLinkedList {
public:

    int data;
    MyLinkedList*next;

    MyLinkedList(int val){

        data=val;
        next=NULL;
    }

    MyLinkedList*head;

    MyLinkedList() {
        head=NULL;
        
    }
    
    int get(int index) {

        if(index < 0) {
            return -1;
        }

        MyLinkedList* curr = head;

        for(int i = 0; i < index; i++) {

            if(curr == NULL) {
                return -1;
            }

            curr = curr->next;
        }

        if(curr == NULL) {
            return -1;
        }

        return curr->data;
    }
    
    void addAtHead(int val) {

        MyLinkedList*temp;
        temp=new MyLinkedList(val);

        if(head==NULL){

            head=temp;
        }
        else{
            temp->next=head;
            head=temp;
        }
        
    }
    
    void addAtTail(int val) {
        
        MyLinkedList*curr=head;

        MyLinkedList*temp=new MyLinkedList(val);

        if(head==NULL){

            head=temp;
            return;
        }



        while(curr->next!=NULL){
            curr=curr->next;
        }

        curr->next=temp;
    }
    
    void addAtIndex(int index, int val) {

        if(index < 0) {
            return;
        }

        if(index == 0) {
            MyLinkedList* temp = new MyLinkedList(val);

            temp->next = head;
            head = temp;

            return;
        }

        MyLinkedList* curr = head;

        // Move to node just before index
        for(int i = 0; i < index - 1; i++) {

            if(curr == NULL) {
                return;
            }

            curr = curr->next;
        }

        // If index is greater than list length
        if(curr == NULL) {
            return;
        }

        MyLinkedList* temp = new MyLinkedList(val);

        temp->next = curr->next;
        curr->next = temp;
    }
    
    

    void deleteAtIndex(int index) {

        if(index < 0) {
            return;
        }

        if(head == NULL) {
            return;
        }

        // Delete head
        if(index == 0) {

            MyLinkedList* temp = head;

            head = head->next;

            delete temp;

            return;
        }

        // Find node before the target
        MyLinkedList* curr = head;

        for(int i = 0; i < index - 1; i++) {

            if(curr == NULL) {
                return;
            }

            curr = curr->next;
        }

        // Index is outside the list
        if(curr == NULL || curr->next == NULL) {
            return;
        }

        // Node to delete
        MyLinkedList* temp = curr->next;

        curr->next = temp->next;

        delete temp;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */