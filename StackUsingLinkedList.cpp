#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        
        Node(int val){
            data = val;
            next = NULL;
        }
};

class Stack{
    Node* ptr;
    
    public: 
        Stack(){
            ptr = NULL;
        }
        
        bool isEmpty(){
            return ptr == NULL;
        }
        
        void push(int val){
            Node* newNode = new Node(val);
            newNode->next = ptr;
            ptr = newNode;
        }
        
        void pop(){
            if(isEmpty()){
                cout<<"Underflow error!!"<<endl;
            }
            
            Node* temp = ptr;
            ptr = ptr->next;
            delete temp;
        }
        
        void peek(){
            if(isEmpty()){
                cout<<"Underflow error!!"<<endl;
            }
            
            cout<<ptr->data;
        }
        
        void display(){
            if(isEmpty()){
                cout<<"Underflow error!!"<<endl;
            }
            
            Node* temp = ptr;
            
            while(temp != NULL){
                cout<<temp->data<<" ";
                temp = temp->next;
            }
        }
}

