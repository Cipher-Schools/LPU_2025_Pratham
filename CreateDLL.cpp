#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int data) {
        this->data = data;
        prev = NULL;
        next = NULL;
    }
};

int main(){
  Node* head = new Node(1);
  Node* n1 = new Node(2);
  Node* n2 = new Node(3);
  Node* n3 = new Node(4);
  Node* n4 = new Node(5);

  head->next = n1;
  n1->prev = head;
  n1->next = n2;
  n2->prev = n1;
  n2->next = n3;
  n3->prev = n2;
  n3->next = n4;
  n4->prev = n3;
}
