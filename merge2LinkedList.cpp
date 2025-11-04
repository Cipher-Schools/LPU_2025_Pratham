Node* mergeTwoLL(Node* &head1,Node* &head2){
    Node* dummy = new Node(-1);
    Node* curr = dummy;
    Node* c1 = head1;
    Node* c2 = head2;
    
    while(c1 != NULL && c2 != NULL){
        if(c1->data <=c2->data){
            curr->next = c1;
            c1 = c1->next;
            curr = curr->next;
        }
        else{
            curr->next = c2;
            c2 = c2->next;
            curr = curr->next;
        }
    }
    
    if(c1 == NULL && c2 != NULL){
        curr->next = c2;
    }
    
    if(c1 != NULL && c2 == NULL){
        curr->next = c1;
    }
    
    return dummy->next;
}
