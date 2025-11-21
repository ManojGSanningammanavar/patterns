#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next=NULL;
        }
};

class sll{
    Node* head;
    Node* tail;
public:
    sll(){
        head = tail= NULL;
        
    }

    void insert_bigin(int val){
    
        Node* newnode = new Node(val);

        if(head == NULL){
            head = tail=newnode;
            
            return;
        }
        else{
            newnode->next = head;
            head=newnode;
            
            return;
        }
    }

    void push_back(int val){
        Node* newNode= new Node(val);

        if(head == NULL){
            head = tail = newNode ;
            return;
        }
        else{
            tail->next = newNode;
            tail - newNode;
            return;
        }
    }

    void print(){
    
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
};

int main(){
    sll list;
    list.insert_bigin(89);
    list.insert_bigin(45);
    list.insert_bigin(29);
    list.insert_bigin(67);
    list.push_back(3);
    list.print();
}