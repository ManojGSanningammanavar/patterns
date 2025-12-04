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

    void pop_front(){
        if(head == NULL){
            cout<<"NO LL Exists\n";
        return;
    }
    Node* temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
    }

    void pop_back(){
        if(head == NULL){
            cout<<"NO LL Exists\n";
        return;
    }
    Node* temp = head;
    while(temp->next != tail){
        temp = temp->next;
    }
    temp->next=NULL;
    delete tail;
    tail = temp;
    }

    int search(int key){
        Node* temp = head;
        int idx=0;
        while(temp->next!=NULL){
            if(temp->data==key){
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }
};

int main(){
    sll list;
    list.insert_bigin(89);
    list.insert_bigin(45);
    list.insert_bigin(29);
    list.insert_bigin(78);
   cout<<"\n";
    // list.push_back(3);
    // list.pop_front();
    // list.pop_back();
    list.print();
    cout<<"\n";
    cout<<list.search(29)<<endl;
    
}