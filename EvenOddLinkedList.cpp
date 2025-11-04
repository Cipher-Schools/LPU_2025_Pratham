void segregrateEvenOdd(Node* &head){
    Node* even = new Node(-1);
    Node* odd = new Node(-1);
    
    Node* pe = even;
    Node* po = odd;
    
    Node* curr = head;
    
    while(curr != NULL){
        if(curr->data%2 == 0){
            pe->next = curr;
            pe = pe->next;
        }
        else{
            po->next = curr;
            po = po->next;
        }
        curr = curr->next;
    }
    
    po->next = NULL;
    pe-next = odd->next;
}
